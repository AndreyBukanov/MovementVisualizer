#ifndef GEOMETRYITEMS_H
#define GEOMETRYITEMS_H

namespace Geometry
{
    struct Dot
    {
        double x = 0;
        double y = 0;

        Dot(){};
        Dot(double X, double Y) : x(X), y(Y) {};
    };

    struct Vector
    {
        Dot begin = Dot(0.0 , 0.0);
        Dot end = Dot(0.0 , 0.0);

        Vector(){};
        Vector(Dot &Begin, Dot &End) : begin(Begin), end(End) {};
        Vector(Dot &End) : end(End) {};
    };
}

#endif // GEOMETRYITEMS_H
