#ifndef POLARELIPSE_H
#define POLARELIPSE_H

#include "polar_shape.h"

class PolarEllipse : public PolarShape
{

private:

    double m_a; // Semi-major axis
    double m_b; // Semi-minor axis

public:

    PolarEllipse(double x, double y, double a, double b);

    Geometry::Dot value(double angle, double phase) override;

};

#endif // POLARELIPSE_H
