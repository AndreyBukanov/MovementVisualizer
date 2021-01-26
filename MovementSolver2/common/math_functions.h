#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

#include <math.h>
#include "geometry_items.h"

namespace Math
{
    static const double pi  = atan(1) * 4;
    static const double pi2 = pi * 2;

    /*
     * Return [1,0] vector
    */
    Geometry::Vector basisX();

    /*
     * Return [0,1] vector
    */
    Geometry::Vector basisY();

    /*
     * Move vector begin to the dot
    */
    Geometry::Vector moveVector(Geometry::Vector &v, Geometry::Dot &d);

    /*
     * Move vector begin to the origin
    */
    Geometry::Vector originVector(Geometry::Vector &v);

    /*
     *  Check if value is in limit, return value if it is, return min or max if it isn't
    */
    double onLimit(double value, double min, double max);

    /*
     *  Return distance between dots
    */
    double distance(Geometry::Dot &a, Geometry::Dot&b);

    /*
     *  Return length of vector
    */
    double length(Geometry::Vector &v);

    /*
     *  Return dot product of vectors
    */
    double scalarMutiply(Geometry::Vector &v1, Geometry::Vector &v2);

    /*
     *  Return angle between vectors
    */
    double angle(Geometry::Vector &v1, Geometry::Vector &v2);

    /*
     *  Convert and return angle form Degree to Radian
    */
    double radian(double angle);

    /*
     *  Convert and return angle form Radian to Degree
    */
    double degree(double angle);

    /*
     *  Remove all full turns and make positive rotation
    */
    double solveAngle(double angle);

    /*
     *  Calculate vector from polar to decart system
    */
    Geometry::Vector decart(double length, double angle);

    /*
     * Check if triangle is degenerate
    */
    bool triangleDegenerate(double a, double b, double c);

    /*
     *  Return angle of triangle in rad between a and b side
    */
    double triangleAngle(double a, double b, double c);
};

#endif // MATHFUNCTIONS_H
