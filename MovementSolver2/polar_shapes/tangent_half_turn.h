#ifndef TANGENTHALFTURN_H
#define TANGENTHALFTURN_H

#include "common/i_polar_shape.h"
#include "common/math_functions.h"

class TangentHalfTurn : public IPolarShape
{
public:
    TangentHalfTurn();

    double value(double angle, double phase = Math::pi2);
};

#endif // TANGENTHALFTURN_H
