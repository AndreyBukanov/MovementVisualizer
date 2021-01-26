#ifndef POLARSPIRALE_H
#define POLARSPIRALE_H

#include "polar_shape.h"

class PolarSpirale : public PolarShape
{
private:

    double m_a; // Semi-major axis
    double m_b; // Semi-minor axis

public:

    PolarSpirale(double x, double y, double a, double b);

    Geometry::Dot value(double angle) override;
};

#endif // POLARSPIRALE_H
