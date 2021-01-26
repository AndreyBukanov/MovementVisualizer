#ifndef LEGTRAJECTORY_H
#define LEGTRAJECTORY_H

#include "i_polar_shape.h"

class LegTrajectory
{
public:
    LegTrajectory();

    Geometry::Dot value(double angle, double phase);

//private:

    double solveOffsetX(double angle, double phase);
    double solveOffsetY(double angle, double phase);
};

#endif // LEGTRAJECTORY_H
