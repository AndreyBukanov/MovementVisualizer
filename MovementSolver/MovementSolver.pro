QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    leg_constructor.cpp \
    main.cpp \
    mainwindow.cpp \
    math_functions.cpp \
    polar_ellipse.cpp \
    polar_shape.cpp \
    polar_spirale.cpp

HEADERS += \
    geometry_items.h \
    i_polar_shape.h \
    leg_constuctor.h \
    mainwindow.h \
    math_functions.h \
    polar_ellipse.h \
    polar_shape.h \
    polar_spirale.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
