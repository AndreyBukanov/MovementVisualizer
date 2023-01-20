/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QPushButton *pushButtonZoomIn;
    QPushButton *pushButtonZoomOut;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumberPhase;
    QSlider *horizontalSliderPhase;
    QLCDNumber *lcdNumberAngle;
    QSlider *horizontalSliderAngle;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1099, 690);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        gridLayout_2->addWidget(graphicsView, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        pushButtonZoomIn = new QPushButton(centralwidget);
        pushButtonZoomIn->setObjectName(QString::fromUtf8("pushButtonZoomIn"));
        QFont font1;
        font1.setBold(true);
        pushButtonZoomIn->setFont(font1);

        horizontalLayout->addWidget(pushButtonZoomIn);

        pushButtonZoomOut = new QPushButton(centralwidget);
        pushButtonZoomOut->setObjectName(QString::fromUtf8("pushButtonZoomOut"));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        pushButtonZoomOut->setFont(font2);

        horizontalLayout->addWidget(pushButtonZoomOut);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumberPhase = new QLCDNumber(centralwidget);
        lcdNumberPhase->setObjectName(QString::fromUtf8("lcdNumberPhase"));
        lcdNumberPhase->setMinimumSize(QSize(100, 30));
        lcdNumberPhase->setProperty("intValue", QVariant(360));

        gridLayout->addWidget(lcdNumberPhase, 0, 1, 1, 1);

        horizontalSliderPhase = new QSlider(centralwidget);
        horizontalSliderPhase->setObjectName(QString::fromUtf8("horizontalSliderPhase"));
        horizontalSliderPhase->setMinimum(0);
        horizontalSliderPhase->setMaximum(360);
        horizontalSliderPhase->setSingleStep(1);
        horizontalSliderPhase->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderPhase, 0, 2, 1, 1);

        lcdNumberAngle = new QLCDNumber(centralwidget);
        lcdNumberAngle->setObjectName(QString::fromUtf8("lcdNumberAngle"));
        lcdNumberAngle->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(lcdNumberAngle, 1, 1, 1, 1);

        horizontalSliderAngle = new QSlider(centralwidget);
        horizontalSliderAngle->setObjectName(QString::fromUtf8("horizontalSliderAngle"));
        horizontalSliderAngle->setMaximum(360);
        horizontalSliderAngle->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAngle, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(60, 30));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label->setFont(font3);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 30));
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1099, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Zoom:", nullptr));
        pushButtonZoomIn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonZoomOut->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PHASE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ANGLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
