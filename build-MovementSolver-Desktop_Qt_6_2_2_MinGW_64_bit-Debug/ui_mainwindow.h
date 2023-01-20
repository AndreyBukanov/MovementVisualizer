/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_11;
    QGraphicsView *graphicsView;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonSettingsDefault;
    QPushButton *pushButtonSettingsUpdate;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumberAngle;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxPhaseStep;
    QSpinBox *spinBoxAngleSpeed;
    QLabel *label_12;
    QFrame *frame_2;
    QGridLayout *gridLayout_9;
    QFrame *frame_6;
    QGridLayout *gridLayout_5;
    QSpinBox *spinBoxSemiMajorAxis;
    QLabel *label_5;
    QSpinBox *spinBoxSemiMinorAxis;
    QSpinBox *spinBoxCenterHeight;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *frame_9;
    QGridLayout *gridLayout_8;
    QSpinBox *spinBoxForearmLength;
    QLabel *label_2;
    QSpinBox *spinBoxForearmMinAngle;
    QLabel *label_10;
    QSpinBox *spinBoxForearmMaxAngle;
    QLabel *label_11;
    QFrame *frame_8;
    QGridLayout *gridLayout_7;
    QSpinBox *spinBoxShoulderLength;
    QLabel *label;
    QSpinBox *spinBoxShoulderMinAngle;
    QLabel *label_8;
    QSpinBox *spinBoxShoulderMaxAngle;
    QLabel *label_9;
    QFrame *frame_7;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBoxBaseLength;
    QLabel *label_4;
    QFrame *frame_10;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumberPhaseOffset;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_13;
    QDial *dialPhase;
    QFrame *frame_11;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_ComConnect;
    QPushButton *pushButton_ComScan;
    QCheckBox *checkBox_ComEnable;
    QComboBox *comboBox_ComList;
    QCheckBox *checkBoxTopView;
    QCheckBox *checkBoxConstructGeometry;
    QSpacerItem *verticalSpacer;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonRewind;
    QPushButton *pushButtonForward;
    QSlider *horizontalSliderPhase;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSizePlus;
    QPushButton *pushButtonSizeMinus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCenter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1114, 948);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        gridLayout_11->addWidget(graphicsView, 0, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonSettingsDefault = new QPushButton(frame);
        pushButtonSettingsDefault->setObjectName(QString::fromUtf8("pushButtonSettingsDefault"));

        horizontalLayout_3->addWidget(pushButtonSettingsDefault);

        pushButtonSettingsUpdate = new QPushButton(frame);
        pushButtonSettingsUpdate->setObjectName(QString::fromUtf8("pushButtonSettingsUpdate"));

        horizontalLayout_3->addWidget(pushButtonSettingsUpdate);


        gridLayout_10->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumberAngle = new QLCDNumber(frame_5);
        lcdNumberAngle->setObjectName(QString::fromUtf8("lcdNumberAngle"));
        lcdNumberAngle->setMinimumSize(QSize(200, 50));
        lcdNumberAngle->setSmallDecimalPoint(false);
        lcdNumberAngle->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumberAngle, 0, 0, 1, 2);

        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 1, 1, 1);

        doubleSpinBoxPhaseStep = new QDoubleSpinBox(frame_5);
        doubleSpinBoxPhaseStep->setObjectName(QString::fromUtf8("doubleSpinBoxPhaseStep"));
        doubleSpinBoxPhaseStep->setMinimum(0.100000000000000);
        doubleSpinBoxPhaseStep->setMaximum(360.000000000000000);
        doubleSpinBoxPhaseStep->setSingleStep(0.100000000000000);
        doubleSpinBoxPhaseStep->setValue(5.000000000000000);

        gridLayout_3->addWidget(doubleSpinBoxPhaseStep, 1, 0, 1, 1);

        spinBoxAngleSpeed = new QSpinBox(frame_5);
        spinBoxAngleSpeed->setObjectName(QString::fromUtf8("spinBoxAngleSpeed"));
        spinBoxAngleSpeed->setMinimum(1);
        spinBoxAngleSpeed->setMaximum(3600);
        spinBoxAngleSpeed->setSingleStep(10);
        spinBoxAngleSpeed->setValue(360);

        gridLayout_3->addWidget(spinBoxAngleSpeed, 2, 0, 1, 1);

        label_12 = new QLabel(frame_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 1, 1, 1);


        gridLayout_10->addWidget(frame_5, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        spinBoxSemiMajorAxis = new QSpinBox(frame_6);
        spinBoxSemiMajorAxis->setObjectName(QString::fromUtf8("spinBoxSemiMajorAxis"));
        spinBoxSemiMajorAxis->setMaximum(65536);

        gridLayout_5->addWidget(spinBoxSemiMajorAxis, 0, 0, 1, 1);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 1, 1, 1);

        spinBoxSemiMinorAxis = new QSpinBox(frame_6);
        spinBoxSemiMinorAxis->setObjectName(QString::fromUtf8("spinBoxSemiMinorAxis"));
        spinBoxSemiMinorAxis->setMaximum(65536);

        gridLayout_5->addWidget(spinBoxSemiMinorAxis, 1, 0, 1, 1);

        spinBoxCenterHeight = new QSpinBox(frame_6);
        spinBoxCenterHeight->setObjectName(QString::fromUtf8("spinBoxCenterHeight"));
        spinBoxCenterHeight->setMaximum(65536);

        gridLayout_5->addWidget(spinBoxCenterHeight, 2, 0, 1, 1);

        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 2, 1, 1, 1);


        gridLayout_9->addWidget(frame_6, 3, 0, 1, 1);

        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_9);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        spinBoxForearmLength = new QSpinBox(frame_9);
        spinBoxForearmLength->setObjectName(QString::fromUtf8("spinBoxForearmLength"));
        spinBoxForearmLength->setMaximum(65536);
        spinBoxForearmLength->setValue(60);

        gridLayout_8->addWidget(spinBoxForearmLength, 0, 0, 1, 1);

        label_2 = new QLabel(frame_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_8->addWidget(label_2, 0, 1, 1, 1);

        spinBoxForearmMinAngle = new QSpinBox(frame_9);
        spinBoxForearmMinAngle->setObjectName(QString::fromUtf8("spinBoxForearmMinAngle"));

        gridLayout_8->addWidget(spinBoxForearmMinAngle, 1, 0, 1, 1);

        label_10 = new QLabel(frame_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_8->addWidget(label_10, 1, 1, 1, 1);

        spinBoxForearmMaxAngle = new QSpinBox(frame_9);
        spinBoxForearmMaxAngle->setObjectName(QString::fromUtf8("spinBoxForearmMaxAngle"));

        gridLayout_8->addWidget(spinBoxForearmMaxAngle, 2, 0, 1, 1);

        label_11 = new QLabel(frame_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_8->addWidget(label_11, 2, 1, 1, 1);


        gridLayout_9->addWidget(frame_9, 2, 0, 1, 1);

        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        spinBoxShoulderLength = new QSpinBox(frame_8);
        spinBoxShoulderLength->setObjectName(QString::fromUtf8("spinBoxShoulderLength"));
        spinBoxShoulderLength->setMaximum(65536);
        spinBoxShoulderLength->setValue(49);

        gridLayout_7->addWidget(spinBoxShoulderLength, 0, 0, 1, 1);

        label = new QLabel(frame_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 0, 1, 1, 1);

        spinBoxShoulderMinAngle = new QSpinBox(frame_8);
        spinBoxShoulderMinAngle->setObjectName(QString::fromUtf8("spinBoxShoulderMinAngle"));

        gridLayout_7->addWidget(spinBoxShoulderMinAngle, 1, 0, 1, 1);

        label_8 = new QLabel(frame_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 1, 1, 1, 1);

        spinBoxShoulderMaxAngle = new QSpinBox(frame_8);
        spinBoxShoulderMaxAngle->setObjectName(QString::fromUtf8("spinBoxShoulderMaxAngle"));

        gridLayout_7->addWidget(spinBoxShoulderMaxAngle, 2, 0, 1, 1);

        label_9 = new QLabel(frame_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 2, 1, 1, 1);


        gridLayout_9->addWidget(frame_8, 1, 0, 1, 1);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinBoxBaseLength = new QSpinBox(frame_7);
        spinBoxBaseLength->setObjectName(QString::fromUtf8("spinBoxBaseLength"));
        spinBoxBaseLength->setMaximum(65536);
        spinBoxBaseLength->setValue(165);

        gridLayout_4->addWidget(spinBoxBaseLength, 0, 0, 1, 1);

        label_4 = new QLabel(frame_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);


        gridLayout_9->addWidget(frame_7, 0, 0, 1, 1);

        frame_10 = new QFrame(frame_2);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lcdNumberPhaseOffset = new QLCDNumber(frame_10);
        lcdNumberPhaseOffset->setObjectName(QString::fromUtf8("lcdNumberPhaseOffset"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumberPhaseOffset->sizePolicy().hasHeightForWidth());
        lcdNumberPhaseOffset->setSizePolicy(sizePolicy);
        lcdNumberPhaseOffset->setMinimumSize(QSize(0, 30));
        lcdNumberPhaseOffset->setProperty("intValue", QVariant(90));

        gridLayout_6->addWidget(lcdNumberPhaseOffset, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 5, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 2, 2, 1, 1);

        label_13 = new QLabel(frame_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 4, 2, 1, 1);

        dialPhase = new QDial(frame_10);
        dialPhase->setObjectName(QString::fromUtf8("dialPhase"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dialPhase->sizePolicy().hasHeightForWidth());
        dialPhase->setSizePolicy(sizePolicy1);
        dialPhase->setMaximum(3600);
        dialPhase->setSingleStep(10);
        dialPhase->setValue(900);

        gridLayout_6->addWidget(dialPhase, 1, 0, 5, 2);


        gridLayout_9->addWidget(frame_10, 4, 0, 1, 1);


        gridLayout_10->addWidget(frame_2, 1, 0, 1, 1);

        frame_11 = new QFrame(frame);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        pushButton_ComConnect = new QPushButton(frame_11);
        pushButton_ComConnect->setObjectName(QString::fromUtf8("pushButton_ComConnect"));
        pushButton_ComConnect->setEnabled(false);

        gridLayout_12->addWidget(pushButton_ComConnect, 1, 1, 1, 1);

        pushButton_ComScan = new QPushButton(frame_11);
        pushButton_ComScan->setObjectName(QString::fromUtf8("pushButton_ComScan"));
        pushButton_ComScan->setEnabled(false);

        gridLayout_12->addWidget(pushButton_ComScan, 1, 0, 1, 1);

        checkBox_ComEnable = new QCheckBox(frame_11);
        checkBox_ComEnable->setObjectName(QString::fromUtf8("checkBox_ComEnable"));

        gridLayout_12->addWidget(checkBox_ComEnable, 0, 0, 1, 1);

        comboBox_ComList = new QComboBox(frame_11);
        comboBox_ComList->setObjectName(QString::fromUtf8("comboBox_ComList"));
        comboBox_ComList->setEnabled(false);

        gridLayout_12->addWidget(comboBox_ComList, 0, 1, 1, 1);


        gridLayout_10->addWidget(frame_11, 6, 0, 1, 1);

        checkBoxTopView = new QCheckBox(frame);
        checkBoxTopView->setObjectName(QString::fromUtf8("checkBoxTopView"));

        gridLayout_10->addWidget(checkBoxTopView, 3, 0, 1, 1);

        checkBoxConstructGeometry = new QCheckBox(frame);
        checkBoxConstructGeometry->setObjectName(QString::fromUtf8("checkBoxConstructGeometry"));

        gridLayout_10->addWidget(checkBoxConstructGeometry, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer, 5, 0, 1, 1);


        gridLayout_11->addWidget(frame, 0, 1, 3, 1);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonPlay = new QPushButton(frame_4);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        sizePolicy1.setHeightForWidth(pushButtonPlay->sizePolicy().hasHeightForWidth());
        pushButtonPlay->setSizePolicy(sizePolicy1);
        pushButtonPlay->setMinimumSize(QSize(30, 30));
        pushButtonPlay->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon);
        pushButtonPlay->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButtonPlay);

        pushButtonStop = new QPushButton(frame_4);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));
        sizePolicy1.setHeightForWidth(pushButtonStop->sizePolicy().hasHeightForWidth());
        pushButtonStop->setSizePolicy(sizePolicy1);
        pushButtonStop->setMinimumSize(QSize(30, 30));
        pushButtonStop->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStop->setIcon(icon1);
        pushButtonStop->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButtonStop);

        pushButtonRewind = new QPushButton(frame_4);
        pushButtonRewind->setObjectName(QString::fromUtf8("pushButtonRewind"));
        sizePolicy1.setHeightForWidth(pushButtonRewind->sizePolicy().hasHeightForWidth());
        pushButtonRewind->setSizePolicy(sizePolicy1);
        pushButtonRewind->setMinimumSize(QSize(30, 30));
        pushButtonRewind->setMaximumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/rwd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRewind->setIcon(icon2);
        pushButtonRewind->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButtonRewind);

        pushButtonForward = new QPushButton(frame_4);
        pushButtonForward->setObjectName(QString::fromUtf8("pushButtonForward"));
        sizePolicy1.setHeightForWidth(pushButtonForward->sizePolicy().hasHeightForWidth());
        pushButtonForward->setSizePolicy(sizePolicy1);
        pushButtonForward->setMinimumSize(QSize(30, 30));
        pushButtonForward->setMaximumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/frw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonForward->setIcon(icon3);
        pushButtonForward->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButtonForward);

        horizontalSliderPhase = new QSlider(frame_4);
        horizontalSliderPhase->setObjectName(QString::fromUtf8("horizontalSliderPhase"));
        horizontalSliderPhase->setMaximum(3600);
        horizontalSliderPhase->setSingleStep(10);
        horizontalSliderPhase->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderPhase);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_4, 1, 0, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonSizePlus = new QPushButton(frame_3);
        pushButtonSizePlus->setObjectName(QString::fromUtf8("pushButtonSizePlus"));

        horizontalLayout->addWidget(pushButtonSizePlus);

        pushButtonSizeMinus = new QPushButton(frame_3);
        pushButtonSizeMinus->setObjectName(QString::fromUtf8("pushButtonSizeMinus"));

        horizontalLayout->addWidget(pushButtonSizeMinus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCenter = new QPushButton(frame_3);
        pushButtonCenter->setObjectName(QString::fromUtf8("pushButtonCenter"));

        horizontalLayout->addWidget(pushButtonCenter);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1114, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Movement Solver", nullptr));
        pushButtonSettingsDefault->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        pushButtonSettingsUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Phase step", nullptr));
        doubleSpinBoxPhaseStep->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        spinBoxAngleSpeed->setSuffix(QCoreApplication::translate("MainWindow", " deg/sec", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Angle Speed", nullptr));
        spinBoxSemiMajorAxis->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Semi-major axis", nullptr));
        spinBoxSemiMinorAxis->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        spinBoxCenterHeight->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Semi-minor axis", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Center height", nullptr));
        spinBoxForearmLength->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Forearm length", nullptr));
        spinBoxForearmMinAngle->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Forearm min angle", nullptr));
        spinBoxForearmMaxAngle->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Forearm max angle", nullptr));
        spinBoxShoulderLength->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sholder length", nullptr));
        spinBoxShoulderMinAngle->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sholder min angle", nullptr));
        spinBoxShoulderMaxAngle->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Sholder max angle", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Base length", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Phase Offset", nullptr));
        pushButton_ComConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_ComScan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        checkBox_ComEnable->setText(QCoreApplication::translate("MainWindow", "COM ENABLE", nullptr));
        checkBoxTopView->setText(QCoreApplication::translate("MainWindow", "Draw top view", nullptr));
        checkBoxConstructGeometry->setText(QCoreApplication::translate("MainWindow", "Draw construct geometry", nullptr));
        pushButtonPlay->setText(QString());
        pushButtonStop->setText(QString());
        pushButtonRewind->setText(QString());
        pushButtonForward->setText(QString());
        pushButtonSizePlus->setText(QCoreApplication::translate("MainWindow", "Size + ", nullptr));
        pushButtonSizeMinus->setText(QCoreApplication::translate("MainWindow", "Size -", nullptr));
        pushButtonCenter->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
