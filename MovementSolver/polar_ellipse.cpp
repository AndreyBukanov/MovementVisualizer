#include "polar_ellipse.h"

PolarEllipse::PolarEllipse(double x, double y, double a, double b) : PolarShape(Geometry::Dot(x, y)) // Origin location dot
{
    m_a = a;
    m_b = b;
}

Geometry::Dot PolarEllipse::value(double angle, double phase)
{
    (void)phase;

    Geometry::Vector MajorR = Math::decart(m_a, angle);
    Geometry::Vector MinorR = Math::decart(m_b, angle);

    double x = m_center.x + MajorR.end.x;
    double y = m_center.y + MinorR.end.y;

    return Geometry::Dot(x, y);
}
