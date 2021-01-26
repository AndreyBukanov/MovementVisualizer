#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "common/leg_trajectory.h"
#include "common/math_functions.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->draw();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::draw()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);

    drawOrigin(scene);

    auto drawRedDot = [scene](double x, double y)
    {
        QPen pen(Qt::red);
        pen.setStyle(Qt::PenStyle::SolidLine);
        pen.setCosmetic(true);
        scene->addEllipse(x, y, 5, 5, pen);
    };

    auto drawBlueDot = [scene](double x, double y)
    {
        QPen pen(Qt::blue);
        pen.setStyle(Qt::PenStyle::SolidLine);
        pen.setCosmetic(true);
        scene->addEllipse(x, y, 5, 5, pen);
    };

    //===========================================================

    LegTrajectory trajectory;

    for (int i = 0; i < 360; i++)
    {
        double angle = Math::radian(i);
        double phase = Math::radian(m_phase);

        //Geometry::Dot dot = trajectory.value(angle, phase);

        Geometry::Vector xv =  Math::decart(trajectory.solveOffsetX(angle, phase), angle);
        Geometry::Vector yv =  Math::decart(trajectory.solveOffsetY(angle, phase), angle);

        double K = 500;

        Geometry::Dot dot;

        dot= xv.end;
        drawRedDot(dot.x * K, dot.y * K);

        dot = yv.end;
        drawBlueDot(dot.x * K, dot.y * K);
    }

    //===========================================================

    updateScene(scene);
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

void MainWindow::drawOrigin(QGraphicsScene *scene)
{
    QPen pen(Qt::green);
    pen.setStyle(Qt::PenStyle::SolidLine);
    pen.setCosmetic(true);

    scene->addLine(-0xffff, 0, 0xffff, 0, pen);
    scene->addLine(0, -0xffff, 0, 0xffff, pen);
}

void MainWindow::on_horizontalSliderPhase_valueChanged(int value)
{
    m_phase = ui->horizontalSliderPhase->maximum() - value;
    ui->lcdNumberPhase->display((int)m_phase);
    draw();
}

void MainWindow::on_horizontalSliderAngle_valueChanged(int value)
{
    m_angle = value;
    ui->lcdNumberAngle->display((int)m_angle);
    draw();
}

void MainWindow::on_pushButtonZoomIn_released()
{
    ui->graphicsView->scale(1.1, 1.1);
}

void MainWindow::on_pushButtonZoomOut_released()
{
    ui->graphicsView->scale(0.9, 0.9);
}
