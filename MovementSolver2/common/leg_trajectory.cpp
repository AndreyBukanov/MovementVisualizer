#include "leg_trajectory.h"
#include "math_functions.h"

LegTrajectory::LegTrajectory()
{

}

Geometry::Dot LegTrajectory::value(double angle, double phase)
{
    Geometry::Dot dot;

    angle = Math::solveAngle(angle); // [0 - 2pi], positive rotation
    phase = Math::solveAngle(phase); // [0 - 2pi], positive rotation

    dot.x = solveOffsetX(angle, phase); // solve X moving
    dot.y = solveOffsetY(angle, phase); // solve Y moving

    return dot;
}

double LegTrajectory::solveOffsetX(double angle, double phase)
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

double LegTrajectory::solveOffsetY(double angle, double phase)
{
    double result = 0.0;

    if(angle > Math::pi2 - phase) // leg on air
    {
        result = sin( ( (Math::pi2 - angle) * Math::pi ) / (phase) );
    }

    return result;
}





















