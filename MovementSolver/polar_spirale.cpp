#include "polar_spirale.h"

double PolarSpirale::solveOffsetX(double angle, double phase)
{
    double result = 0.0;

    if(angle < Math::pi2 - phase) // leg on floor
    {
        result = angle / (Math::pi2 - phase);
    }
    else // leg on air
    {
        result = (Math::pi2 - angle) / (phase);
    }

    return result; // trajectory center offset
}

double PolarSpirale::solveOffsetY(double angle, double phase)
{
    double result = 0.0;

    if(angle > Math::pi2 - phase) // leg on air
    {
        result = sin( ( (Math::pi2 - angle) * Math::pi ) / (phase) );
    }

    return result;
}

PolarSpirale::PolarSpirale(double x, double y, double a, double b) : PolarShape(Geometry::Dot(x, y)) // Origin location dot
{
    m_a = a;
    m_b = b;
}

Geometry::Dot PolarSpirale::value(double angle, double phase)
{
    // Angle calculation =======================================

    angle = Math::solveAngle(angle);
    phase = Math::solveAngle(phase);

    // Y axis movement ==========================================

    double x = solveOffsetX(angle, phase) * m_a * -1.0 + m_a / 2.0;

    // X axis movement ==========================================

    double y = solveOffsetY(angle, phase) * m_b * -1.0;

    // Result ===================================================
    return Geometry::Dot(x + m_center.x, y + m_center.y);
}
