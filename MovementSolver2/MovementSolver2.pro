QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    common/leg_trajectory.cpp \
    common/math_functions.cpp \
    main.cpp \
    mainwindow.cpp \
    polar_shapes/pushpull_archimed_spiral.cpp \
    polar_shapes/sinus_single_leaf.cpp \
    polar_shapes/tangent_full_turn.cpp \
    polar_shapes/tangent_half_turn.cpp

HEADERS += \
    common/geometry_items.h \
    common/i_polar_shape.h \
    common/leg_trajectory.h \
    common/math_functions.h \
    mainwindow.h \
    polar_shapes/pushpull_archimed_spiral.h \
    polar_shapes/sinus_single_leaf.h \
    polar_shapes/tangent_full_turn.h \
    polar_shapes/tangent_half_turn.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
