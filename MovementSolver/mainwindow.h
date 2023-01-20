#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QThread>

#include "geometry_items.h"
#include "leg_constuctor.h"
#include "com_port_service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class RuningThread : public QThread
{
    Q_OBJECT

public:

    void run() override;

    void setDelay (double speed);
    void setAngle (double angle);
    void setStep  (double angle);

signals:
    void step(double angle);

public slots:
    void pause();

private:
    double m_delay = 1000;
    double m_angle = 0;
    double m_step  = 1;

    bool m_isRuning = false;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

    void stopRunnigThread();

private slots:
    void on_pushButtonCenter_released();

    void on_pushButtonSizeMinus_released();

    void on_pushButtonSizePlus_released();

    void on_doubleSpinBoxPhaseStep_valueChanged(double arg1);

    void on_pushButtonRewind_released();

    void on_pushButtonForward_released();

    void on_pushButtonSettingsDefault_released();

    void on_pushButtonSettingsUpdate_released();

    void on_updateAngleDouble(double angle);

    void on_updateAngleInt(int angle);

    void on_updatePhaseInt(int angle);

    void on_pushButtonPlay_released();

    void on_pushButtonStop_released();

    void on_spinBoxAngleSpeed_valueChanged(int arg1);

    void on_checkBox_ComEnable_stateChanged(int arg1);

    void on_pushButton_ComScan_released();

    void on_pushButton_ComConnect_released();

private:
    Ui::MainWindow *ui;

    RuningThread m_running_thread;

    double m_step = 0;
    double m_angle = 0;
    double m_phase = 0;
    double m_delay = 0;

    BaseSettings m_settings;

    void setSettings(BaseSettings &settings);
    void getSettings(BaseSettings &settings);

    double getCurrentAngle();
    double getCurrentPhase();

    void updateScene (QGraphicsScene *scene);

    void drawScene(BaseSettings &settings);

    void drawOrigin                (QGraphicsScene *scene);
    void drawTrajectory            (QGraphicsScene *scene, IPolarShape *trajectory, double phase);
    void drawConstructionGeometry  (QGraphicsScene *scene, Leg &leg);
    void drawMainGeometry          (QGraphicsScene *scene, Leg &leg, int layer);
    void drawTopView               (QGraphicsScene *scene, Leg &fl, Leg &fr, Leg &rl, Leg &rr, double height);

    void drawVector(QGraphicsScene *scene, Geometry::Vector &vector, QPen &pen);
    void drawEllipse(QGraphicsScene *scene, double x, double y, double a, double b, QPen &pen);

    ComPortService m_com_port_service;
};
#endif // MAINWINDOW_H
