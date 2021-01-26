#ifndef LEG_CONSTUCTOR_H
#define LEG_CONSTUCTOR_H

#include "geometry_items.h"
#include "math_functions.h"
#include "i_polar_shape.h"

struct Leg
{
    Geometry::Vector support  = Geometry::Vector();
    Geometry::Vector chord    = Geometry::Vector();
    Geometry::Vector shoulder = Geometry::Vector();
    Geometry::Vector forearm  = Geometry::Vector();
};

struct LegSettings
{
    Geometry::Dot origin = Geometry::Dot();

    double sholder = 0.0;
    double forearm = 0.0;

    double phase = 0.0;

    bool inverted = false;
};

struct BaseSettings
{
    unsigned long baselength = 0;

    unsigned long sholderLength   = 0;
    unsigned long sholderMinAngle = 0;
    unsigned long sholderMaxAngle = 0;

    unsigned long forearmLength   = 0;
    unsigned long forearmMinAngle = 0;
    unsigned long forearmMaxAngle = 0;

    unsigned long semiMajorAxis = 0;
    unsigned long semiMinorAxis = 0;
    unsigned long centerHeight  = 0;

    unsigned long phaseOffset = 0;

    void setToDefault();
};

struct LegConstructor
{
    static Leg solve(LegSettings &settings, IPolarShape *trajectory);
};

#endif // LEG_CONSTUCTOR_H
