#ifndef POLARSHAPE_H
#define POLARSHAPE_H

#include "i_polar_shape.h"
#include "math_functions.h"
#include "geometry_items.h"

class PolarShape : public IPolarShape
{

protected:

    Geometry::Dot m_center = {0, 0};

public:

    PolarShape(Geometry::Dot center);

    Geometry::Dot center() override;
    Geometry::Dot value(double angle, double phase) override;
};

#endif // POLARSHAPE_H
