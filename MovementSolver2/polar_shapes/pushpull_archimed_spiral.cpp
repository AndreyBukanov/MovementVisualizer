#include "pushpull_archimed_spiral.h"

PushPullArchimedSpiral::PushPullArchimedSpiral()
{

}

double PushPullArchimedSpiral::value(double angle, double phase)
{
    double result = 0.0;

    if(angle < phase) // leg on floor
    {
        result = angle / phase;
    }
    else // leg on air
    {
        result = (Math::pi2 - angle) / (Math::pi2 - phase);
    }

    return result;
}
