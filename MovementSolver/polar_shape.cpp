#include "polar_shape.h"

PolarShape::PolarShape(Geometry::Dot center) : m_center(center)
{
    // Do nothing =)
}

Geometry::Dot PolarShape::center()
{
    return m_center; // Return the origin coordinates
}

Geometry::Dot PolarShape::value(double angle, double phase)
{
    (void)angle; // Make compiler happy
    (void)phase;

    return Geometry::Dot(0, 0); // Return zero
}
