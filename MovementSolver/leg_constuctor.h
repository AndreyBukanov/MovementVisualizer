#ifndef LEG_CONSTUCTOR_H
#define LEG_CONSTUCTOR_H

#include <stdint.h>

#include "geometry_items.h"
#include "math_functions.h"
#include "i_polar_shape.h"

struct Leg
{
    Geometry::Vector support  = Geometry::Vector();
    Geometry::Vector chord    = Geometry::Vector();
    Geometry::Vector shoulder = Geometry::Vector();
    Geometry::Vector forearm  = Geometry::Vector();

    double shoulder_angle = 0.0;
    double forearm_angle = 0.0;
};

struct LegSettings
{
    Geometry::Dot origin = Geometry::Dot();

    double sholder = 0.0;
    double forearm = 0.0;

    double angle = 0.0;
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

    void setToDefault();
};

#pragma pack(push,1)
struct Base
{
   uint16_t FL_high = 0;
   uint16_t FL_low  = 0;

   uint16_t RL_high = 0;
   uint16_t RL_low  = 0;

   uint16_t FR_high = 0;
   uint16_t FR_low  = 0;

   uint16_t RR_high = 0;
   uint16_t RR_low  = 0;
};
#pragma pack(pop)

struct LegConstructor
{
    static Leg solve(LegSettings &settings, IPolarShape *trajectory);
    static Base legsToBase(Leg &FL, Leg &RL, Leg &FR, Leg &RR);
};

#endif // LEG_CONSTUCTOR_H
