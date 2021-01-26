#ifndef PUSHPULLARCHIMEDSPIRAL_H
#define PUSHPULLARCHIMEDSPIRAL_H

#include "common/i_polar_shape.h"
#include "common/math_functions.h"

class PushPullArchimedSpiral : public IPolarShape
{
public:
    PushPullArchimedSpiral();

    double value(double angle, double phase);
};

#endif // PUSHPULLARCHIMEDSPIRAL_H
