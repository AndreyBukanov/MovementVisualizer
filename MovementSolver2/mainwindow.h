#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_horizontalSliderPhase_valueChanged(int value);

    void on_horizontalSliderAngle_valueChanged(int value);

    void on_pushButtonZoomIn_released();

    void on_pushButtonZoomOut_released();

private:
    Ui::MainWindow *ui;

    unsigned int m_phase = 0;
    unsigned int m_angle = 0;

    void draw();
    void updateScene(QGraphicsScene *scene);
    void drawOrigin(QGraphicsScene *scene);
};
#endif // MAINWINDOW_H
