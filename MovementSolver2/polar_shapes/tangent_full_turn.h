#ifndef TANGENTFULLTURN_H
#define TANGENTFULLTURN_H

#include "common/i_polar_shape.h"
#include "common/math_functions.h"

class TangentFullTurn : public IPolarShape
{
public:
    TangentFullTurn();

    double value(double angle, double phase = Math::pi2);
};

#endif // TANGENTFULLTURN_H
