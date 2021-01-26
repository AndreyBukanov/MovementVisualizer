#ifndef SINUSSINGLELEAF_H
#define SINUSSINGLELEAF_H

#include "common/i_polar_shape.h"
#include "common/math_functions.h"

class SinusSingleLeaf : public IPolarShape
{
public:
    SinusSingleLeaf();

    double value(double angle, double phase);
};

#endif // SINUSSINGLELEAF_H
