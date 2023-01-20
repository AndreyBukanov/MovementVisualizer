#ifndef POLARSPIRALE_H
#define POLARSPIRALE_H

#include "polar_shape.h"

class PolarSpirale : public PolarShape
{
private:

    double m_a; // Semi-major axis
    double m_b; // Semi-minor axis

    double solveOffsetX(double angle, double phase);
    double solveOffsetY(double angle, double phase);

public:

    PolarSpirale(double x, double y, double a, double b);

    Geometry::Dot value(double angle, double phase) override;
};

#endif // POLARSPIRALE_H
