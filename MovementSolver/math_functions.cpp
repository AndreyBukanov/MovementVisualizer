#include "math_functions.h"

Geometry::Vector Math::moveVector(Geometry::Vector &v, Geometry::Dot &d)
{
    double dx = v.begin.x - v. end.x;
    double dy = v.begin.y - v. end.y;

    double x = d.x + dx;
    double y = d.y + dy;

    Geometry::Dot begin(d);
    Geometry::Dot end(x, y);

    return Geometry::Vector(begin, end);
};


Geometry::Vector Math::originVector(Geometry::Vector &v)
{
    double x = v.end.x - v.begin.x;
    double y = v.end.y - v.begin.y;

    Geometry::Dot end(x, y);

    return Geometry::Vector(end);
};

double Math::onLimit(double value, double min, double max)
{
    if(value > max)
        return max;

    if(value < min)
        return min;

    return value;
};

double Math::distance(Geometry::Dot &a, Geometry::Dot&b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
};

double Math::length(Geometry::Vector &v)
{
    return distance(v.begin, v.end);
};

double Math::scalarMutiply(Geometry::Vector &v1, Geometry::Vector &v2)
{
    Geometry::Vector oV1 = originVector(v1);
    Geometry::Vector oV2 = originVector(v2);

    double x1 = oV1.end.x;
    double y1 = oV1.end.y;

    double x2 = oV2.end.x;
    double y2 = oV2.end.y;

    return  x1 * x2 + y1 * y2;
};

double Math::angle(Geometry::Vector &v1, Geometry::Vector &v2)
{
    double scalar = scalarMutiply(v1, v2);
    double norma1 = length(v1);
    double norma2 = length(v2);

    double value = scalar / (norma1 * norma2);

    value = onLimit(value, -1, 1);

    return acos(value);
};

double Math::radian(double angle)
{
    return angle * pi / 180.0; // Deg -> Rad
};

double Math::degree(double angle)
{
    return angle * 180.0 / pi; // Rad -> Deg
};

double Math::solveAngle(double angle)
{
    angle = fmod(angle, pi2); // Skip all full turns

    if(angle < 0.0)
        angle = pi2 + angle; // Make rotation positive

    return angle;
};

Geometry::Vector Math::decart(double length, double angle)
{
    double x = length * cos(angle);
    double y = length * sin(angle);

    Geometry::Dot end(x, y);

    return Geometry::Vector(end); // Polar -> Decart
};

bool Math::triangleDegenerate(double a, double b, double c)
{
    if((a + b) < c) return true;
    if((b + c) < a) return true;
    if((c + a) < b) return true;

    return false;
}

double Math::triangleAngle(double a, double b, double c)
{
    if (triangleDegenerate(a, b, c))
        return 0;

    double value = pow(a, 2) + pow(b, 2) - pow(c, 2);

    value /= 2 * a * b;

    value = onLimit(value, -1, 1);

    return acos(value);
}

Geometry::Vector Math::basisX()
{
    Geometry::Dot end(1,0);

    return Geometry::Vector(end);
}

Geometry::Vector Math::basisY()
{
    Geometry::Dot end(0,1);
    return Geometry::Vector(end);
}
