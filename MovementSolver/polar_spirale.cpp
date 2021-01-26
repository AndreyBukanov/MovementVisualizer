#include "polar_spirale.h"

PolarSpirale::PolarSpirale(double x, double y, double a, double b) : PolarShape(Geometry::Dot(x, y)) // Origin location dot
{
    m_a = a;
    m_b = b;
}

Geometry::Dot PolarSpirale::value(double angle)
{
    auto solveAngle = [](double angle)
    {
        angle = fmod(angle, Math::pi * 2.0); // Skip all full turns

        if(angle < 0.0)
            angle = Math::pi * 2.0 + angle; // Make rotation positive

        return angle;
    };

    auto solveX = [](double phase)
    {
        double result = 0;
        double edge_1 = 3.0 * Math::pi / 2.0;
        double edge_2 = Math::pi * 2.0;

        if(phase < edge_1)
            result = phase / edge_1;
        else
            result = -3.0 * (phase - edge_2) / edge_1;

        return result;
    };

    auto solveY = [](double phase)
    {
        double result = 0;
        double edge_1 = 3.0 * Math::pi / 2.0;
        double edge_2 = Math::pi * 2.0;

        if(phase > edge_1  && phase < edge_2)
            result = abs(sin(2.0 * phase));
        else
            result = 0.0;

        return result;
    };

    // Angle calculation =======================================

    angle = solveAngle(angle);

    // Y axis movement ==========================================

    double x = solveX(angle) * m_a * -1.0 + m_a / 2.0;

    // X axis movement ==========================================

    double y = solveY(angle) * m_b * -1.0;

    // Result ===================================================
    return Geometry::Dot(x + m_center.x, y + m_center.y);
}
