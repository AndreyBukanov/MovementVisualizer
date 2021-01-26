#ifndef I_POLAR_SHAPE_H
#define I_POLAR_SHAPE_H

#include "geometry_items.h"

class IPolarShape
{
public:

    virtual ~IPolarShape() {};

   /*
    * Return length of vector according the angle and selected phase
    */
   virtual double value(double angle, double phase) = 0;
};

#endif // I_POLAR_SHAPE_H
