#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QScrollBar>
#include <QMessageBox>

#include "polar_ellipse.h"
#include "polar_spirale.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->dialPhase, SIGNAL(valueChanged(int)), this, SLOT(on_updatePhaseInt(int)));
    connect(ui->horizontalSliderPhase, SIGNAL(valueChanged(int)), this, SLOT(on_updateAngleInt(int)));
    connect(&m_running_thread, SIGNAL(step(double)), this, SLOT(on_updateAngleDouble(double)));
    connect(this, SIGNAL(stopRunnigThread()), &m_running_thread, SLOT(pause()));

    m_step = ui->doubleSpinBoxPhaseStep->value();
    m_angle = (double)ui->horizontalSliderPhase->value() / 10;
    m_phase = (double)ui->dialPhase->value() / 10;
    m_delay = (m_step / (double)ui->spinBoxAngleSpeed->value()) * 1000;

    m_settings.setToDefault();
    setSettings(m_settings);

    drawScene(m_settings);
}

MainWindow::~MainWindow()
{
    emit stopRunnigThread();

    m_running_thread.wait();

    delete ui;
}

void MainWindow::drawScene(BaseSettings &settings)
{
    //==========================================================

    double angle = getCurrentAngle();
    double phase = getCurrentPhase();

    double step_coeff = phase / Math::pi;

    if(phase > Math::pi)
        step_coeff = 1.0;

    double step_length = settings.semiMajorAxis * step_coeff;
    double step_height = settings.semiMinorAxis * step_coeff;

    Geometry::Dot baseBegin(settings.baselength / 2.0, 0.0);
    Geometry::Dot baseEnd(-1.0 * settings.baselength / 2.0, 0.0);

    Geometry::Dot trajectoryCenterFront(baseBegin.x, settings.centerHeight);
    Geometry::Dot trajectoryCenterRear(baseEnd.x, settings.centerHeight);

    PolarSpirale trajectoryFront(trajectoryCenterFront.x, trajectoryCenterFront.y,
                                 step_length, step_height);

    PolarSpirale trajectoryRear(trajectoryCenterRear.x, trajectoryCenterRear.y,
                                step_length, step_height);

    LegSettings legSettings;

    legSettings.sholder = settings.sholderLength;
    legSettings.forearm = settings.forearmLength;

    double phase_offset = Math::pi;

    if(phase > phase_offset)
        phase_offset = phase;

    double legFrontLeftPhaseOffset  = 0;
    double legFrontRightPhaseOffset = phase_offset;
    double legRearLeftPhaseOffset   = phase;
    double legRearRightPhaseOffset  = phase + phase_offset;

    legSettings.angle    = angle + legFrontLeftPhaseOffset;
    legSettings.phase    = phase;
    legSettings.origin   = baseBegin;
    legSettings.inverted = true;

    Leg legFrontLeft = LegConstructor::solve(legSettings, &trajectoryFront);

    legSettings.angle    = angle + legFrontRightPhaseOffset;
    legSettings.phase    = phase;
    legSettings.origin   = baseBegin;
    legSettings.inverted = true;

    Leg legFrontRight = LegConstructor::solve(legSettings, &trajectoryFront);

    legSettings.angle    = angle + legRearLeftPhaseOffset;
    legSettings.phase    = phase;
    legSettings.origin   = baseEnd;
    legSettings.inverted = false;

    Leg legRearLeft = LegConstructor::solve(legSettings, &trajectoryRear);

    legSettings.angle    = angle + legRearRightPhaseOffset;
    legSettings.phase    = phase;
    legSettings.origin   = baseEnd;
    legSettings.inverted = false;

    Leg legRearRight = LegConstructor::solve(legSettings, &trajectoryRear);

    //==========================================================

    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);

    drawOrigin(scene);

    if(ui->checkBoxConstructGeometry->isChecked())
    {
        drawTrajectory(scene, &trajectoryFront, phase);
        drawTrajectory(scene, &trajectoryRear, phase);

        drawConstructionGeometry(scene, legFrontLeft);
        drawConstructionGeometry(scene, legFrontRight);
        drawConstructionGeometry(scene, legRearLeft);
        drawConstructionGeometry(scene, legRearRight);
    }

    if(ui->checkBoxTopView->isChecked())
    {
        drawTopView(scene, legFrontLeft, legFrontRight, legRearLeft, legRearRight, settings.centerHeight);
    }

    drawMainGeometry(scene, legFrontLeft,  1);
    drawMainGeometry(scene, legFrontRight, 0);
    drawMainGeometry(scene, legRearLeft,   1);
    drawMainGeometry(scene, legRearRight,  0);

    //==========================================================

    updateScene(scene);

    //==========================================================

    Base base = LegConstructor::legsToBase(legFrontLeft, legFrontRight, legRearLeft, legRearRight);

    m_com_port_service.send((char *)&base, sizeof(base));
}

void MainWindow::drawOrigin(QGraphicsScene *scene)
{
    QPen pen(Qt::green);
    pen.setStyle(Qt::PenStyle::SolidLine);
    pen.setCosmetic(true);

    scene->addLine(-0xffff, 0, 0xffff, 0, pen);
    scene->addLine(0, -0xffff, 0, 0xffff, pen);
}

void MainWindow::drawTrajectory(QGraphicsScene *scene, IPolarShape *trajectory, double phase)
{
    QPen pen(Qt::gray);
    pen.setStyle(Qt::PenStyle::DashLine);
    pen.setCosmetic(true);

    Geometry::Dot dot;
    Geometry::Vector vector;

    for (int angle_deg = 0; angle_deg < 360; angle_deg++)
    {
        double angle = Math::radian(angle_deg);

        vector.begin = dot;

        dot = trajectory->value(angle, phase);

        if(phase == 0) continue;

        vector.end = dot;

        if(angle_deg > 0)
            drawVector(scene, vector, pen);
    }
}

void MainWindow::drawConstructionGeometry(QGraphicsScene *scene, Leg &leg)
{
    QPen pen(Qt::gray);
    pen.setStyle(Qt::PenStyle::DashLine);
    pen.setCosmetic(true);

    // Draw support line
    drawVector(scene, leg.support, pen);

    // Darw chord
    drawVector(scene, leg.chord, pen);
}

void MainWindow::drawMainGeometry(QGraphicsScene *scene, Leg &leg, int layer)
{
    QPen pen(Qt::white);
    pen.setStyle(Qt::PenStyle::SolidLine);
    pen.setCapStyle(Qt::PenCapStyle::RoundCap);
    pen.setWidth(layer ? 4 : 5);
    pen.setCosmetic(true);

    // Draw shoulder
    pen.setColor(layer ? Qt::darkRed : Qt::red);
    drawVector(scene, leg.shoulder, pen);

    // Draw forearm
    pen.setColor(layer ? Qt::darkBlue : Qt::blue);
    drawVector(scene, leg.forearm, pen);
}

void MainWindow::drawTopView(QGraphicsScene *scene, Leg &fl, Leg &fr, Leg &rl, Leg &rr, double height)
{
    double baseWidth = 50, centerOffset = -100, a = 5;

    //=========================================================================

    Geometry::Dot massCenter(0.0, centerOffset);

    Geometry::Dot footprintFL(fl.support.end.x, centerOffset - baseWidth / 2.0);
    Geometry::Dot footprintFR(fr.support.end.x, centerOffset + baseWidth / 2.0);
    Geometry::Dot footprintRL(rl.support.end.x, centerOffset - baseWidth / 2.0);
    Geometry::Dot footprintRR(rr.support.end.x, centerOffset + baseWidth / 2.0);

    QPen pen(Qt::white);
    pen.setStyle(Qt::PenStyle::SolidLine);
    pen.setWidth(3);
    pen.setCosmetic(true);

    //=========================================================================

    pen.setColor(Qt::black);

    drawEllipse(scene, massCenter.x, massCenter.y, a, a, pen);

    //=========================================================================

    QVector<Geometry::Dot> contactPolygon;

    auto almostEqual = [](double a, double b)
    {
        double result = abs(a - b);

        return result < 0.00000000000001 ? true : false;
    };

    auto processFootprint = [this, almostEqual, a, height]
    (QGraphicsScene *scene, QPen &pen, Geometry::Dot &footprint, QVector<Geometry::Dot> &polygon, double length)
    {
        if(almostEqual(length, height))
        {
            polygon.append(footprint);
            pen.setColor(Qt::red);
        }
        else
        {
            pen.setColor(Qt::gray);
        }

        drawEllipse(scene, footprint.x, footprint.y, a, a, pen);
    };

    processFootprint(scene, pen, footprintFL, contactPolygon, fl.support.end.y);
    processFootprint(scene, pen, footprintFR, contactPolygon, fr.support.end.y);
    processFootprint(scene, pen, footprintRR, contactPolygon, rr.support.end.y);
    processFootprint(scene, pen, footprintRL, contactPolygon, rl.support.end.y);

    //=========================================================================

    pen.setWidth(1);
    pen.setColor(Qt::green);

    if(contactPolygon.size() < 1)
        return;

    for(int i = 0; i < contactPolygon.size(); i++)
    {
        if(i == 0) continue;

        Geometry::Dot begin = contactPolygon.at(i-1);
        Geometry::Dot end   = contactPolygon.at(i);
        Geometry::Vector vector(begin, end);

        drawVector(scene, vector, pen);
    }

    Geometry::Dot begin = contactPolygon.at(contactPolygon.size() - 1);
    Geometry::Dot end   = contactPolygon.at(0);
    Geometry::Vector vector(begin, end);

    drawVector(scene, vector, pen);
}

void MainWindow::drawVector(QGraphicsScene *scene, Geometry::Vector &vector, QPen &pen)
{
    scene->addLine(vector.begin.x, vector.begin.y, vector.end.x, vector.end.y, pen);
}

void MainWindow::drawEllipse(QGraphicsScene *scene, double x, double y, double a, double b, QPen &pen)
{
    scene->addEllipse(x - a, y - b, 2 * a, 2 * b, pen);
}


void MainWindow::on_pushButtonCenter_released()
{
    auto setBarCenter = [](QScrollBar *bar)
    {
        int max = bar->maximum();
        int min = bar->minimum();
        int center = (min + max) / 2;

        bar->setValue( center );
    };

    setBarCenter(ui->graphicsView->horizontalScrollBar());
    setBarCenter(ui->graphicsView->verticalScrollBar());
}

void MainWindow::on_pushButtonSizeMinus_released()
{
    ui->graphicsView->scale(0.9, 0.9);
}

void MainWindow::on_pushButtonSizePlus_released()
{
    ui->graphicsView->scale(1.1, 1.1);
}

void MainWindow::on_doubleSpinBoxPhaseStep_valueChanged(double arg1)
{
    m_step = arg1;
    ui->horizontalSliderPhase->setSingleStep((int)(m_step * 10));
}

void MainWindow::on_pushButtonRewind_released()
{
    int value = ui->horizontalSliderPhase->value();
    int min   = ui->horizontalSliderPhase->minimum();
    int step  = ui->horizontalSliderPhase->singleStep();

    if(value > min)
        value -= step;

    ui->horizontalSliderPhase->setValue(value);
}

void MainWindow::on_pushButtonForward_released()
{
    int value = ui->horizontalSliderPhase->value();
    int max   = ui->horizontalSliderPhase->maximum();
    int step  = ui->horizontalSliderPhase->singleStep();

    if(value < max)
        value += step;

    ui->horizontalSliderPhase->setValue(value);
}

void MainWindow::on_pushButtonSettingsDefault_released()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "", "Set settings to default?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        m_settings.setToDefault();
        setSettings(m_settings);
        drawScene(m_settings);
    }
}

void MainWindow::on_pushButtonSettingsUpdate_released()
{
    getSettings(m_settings);
    drawScene(m_settings);
}


void MainWindow::on_updateAngleDouble(double angle)
{
    m_angle = angle;
    ui->lcdNumberAngle->display(m_angle);
    drawScene(m_settings);
}

void MainWindow::on_updateAngleInt(int angle)
{
    m_angle = (double)angle / 10;
    ui->lcdNumberAngle->display(m_angle);
    drawScene(m_settings);
}

void MainWindow::on_updatePhaseInt(int phase)
{
    m_phase = (double)phase / 10;
    ui->lcdNumberPhaseOffset->display(m_phase);
}

void MainWindow::setSettings(BaseSettings &settings)
{
    ui->spinBoxShoulderLength->setValue(settings.sholderLength);
    ui->spinBoxShoulderMinAngle->setValue(settings.sholderMinAngle);
    ui->spinBoxShoulderMaxAngle->setValue(settings.sholderMaxAngle);

    ui->spinBoxForearmLength->setValue(settings.forearmLength);
    ui->spinBoxForearmMinAngle->setValue(settings.forearmMinAngle);
    ui->spinBoxForearmMaxAngle->setValue(settings.forearmMaxAngle);

    ui->spinBoxCenterHeight->setValue(settings.centerHeight);
    ui->spinBoxSemiMajorAxis->setValue(settings.semiMajorAxis);
    ui->spinBoxSemiMinorAxis->setValue(settings.semiMinorAxis);
}

void MainWindow::getSettings(BaseSettings &settings)
{
    settings.baselength = ui->spinBoxBaseLength->value();

    settings.sholderLength   = ui->spinBoxShoulderLength->value();
    settings.sholderMinAngle = ui->spinBoxShoulderMinAngle->value();
    settings.sholderMaxAngle = ui->spinBoxShoulderMaxAngle->value();

    settings.forearmLength   = ui->spinBoxForearmLength->value();
    settings.forearmMinAngle = ui->spinBoxForearmMinAngle->value();
    settings.forearmMaxAngle = ui->spinBoxForearmMaxAngle->value();

    settings.centerHeight  = ui->spinBoxCenterHeight->value();
    settings.semiMajorAxis = ui->spinBoxSemiMajorAxis->value();
    settings.semiMinorAxis = ui->spinBoxSemiMinorAxis->value();
}

double MainWindow::getCurrentAngle()
{
   return Math::radian(m_angle);
}

double MainWindow::getCurrentPhase()
{
    return Math::radian(m_phase);
}

void MainWindow::updateScene(QGraphicsScene *scene)
{
    QGraphicsScene *old_scene = ui->graphicsView->scene();

    ui->graphicsView->setScene(scene);

    if(old_scene != Q_NULLPTR)
    {
        delete old_scene;
    }
}

void RuningThread::run()
{
    m_isRuning = true;

    while(m_isRuning)
    {
        m_angle += m_step;

        if(m_angle >= 360)
            m_angle = fmod(m_angle, 360.0);

        emit step(m_angle);

        QThread::msleep(m_delay);
    }
}

void RuningThread::setDelay(double delay)
{
    m_delay = delay;
}

void RuningThread::setAngle(double angle)
{
    m_angle = angle;
}

void RuningThread::setStep(double step)
{
    m_step = step;
}

void RuningThread::pause()
{
    m_isRuning = false;
}

void MainWindow::on_pushButtonPlay_released()
{
    ui->horizontalSliderPhase->setEnabled(false);
    ui->doubleSpinBoxPhaseStep->setEnabled(false);
    ui->spinBoxAngleSpeed->setEnabled(false);

    m_running_thread.setAngle(m_angle);
    m_running_thread.setStep(m_step);
    m_running_thread.setDelay(m_delay);

    m_running_thread.start();
}

void MainWindow::on_pushButtonStop_released()
{
    emit stopRunnigThread();

    m_running_thread.wait();

    ui->horizontalSliderPhase->setEnabled(true);
    ui->doubleSpinBoxPhaseStep->setEnabled(true);
    ui->spinBoxAngleSpeed->setEnabled(true);

    ui->horizontalSliderPhase->setValue((int)m_angle * 10);
}

void MainWindow::on_spinBoxAngleSpeed_valueChanged(int arg1)
{
    m_delay = (m_step / (double)arg1) * 1000;
}

void MainWindow::on_checkBox_ComEnable_stateChanged(int arg1)
{
    bool enable = false;

    if(arg1 == Qt::Checked)
        enable = true;

    ui->comboBox_ComList->setEnabled(enable);
    ui->pushButton_ComScan->setEnabled(enable);
    ui->pushButton_ComConnect->setEnabled(enable);
}


void MainWindow::on_pushButton_ComScan_released()
{
    m_com_port_service.scan();

    auto ports = m_com_port_service.getList();

    ui->comboBox_ComList->clear();

    for(auto port : ports)
    {
        ui->comboBox_ComList->addItem(port);
    }
}


void MainWindow::on_pushButton_ComConnect_released()
{
    bool connected = m_com_port_service.isConnected();

    if(connected)
    {
        m_com_port_service.disconnect();
        connected = false;
    }
    else
    {
        QString port_name = ui->comboBox_ComList->currentText();
        connected = m_com_port_service.connect(port_name);
    }

    QString connect_text = "";

    if(connected)
        connect_text = "Disconnect";
    else
        connect_text = "Connect";

    ui->pushButton_ComConnect->setText(connect_text);
    ui->pushButton_ComScan->setEnabled(!connected);
    ui->comboBox_ComList->setEnabled(!connected);
    ui->checkBox_ComEnable->setEnabled(!connected);
}

