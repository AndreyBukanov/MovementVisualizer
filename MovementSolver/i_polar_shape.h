#ifndef I_POLAR_SHAPE_H
#define I_POLAR_SHAPE_H

#include "geometry_items.h"

class IPolarShape
{

public:

    virtual ~IPolarShape() {};

   /*
    * Return dot with coordinates of origin
   */
   virtual Geometry::Dot center() = 0;

   /*
    * Return dot with coordinates on curve according the angle
    */
   virtual Geometry::Dot value(double angle) = 0;
};

#endif // I_POLAR_SHAPE_H
