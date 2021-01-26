#include "tangent_half_turn.h"

TangentHalfTurn::TangentHalfTurn()
{

}

double TangentHalfTurn::value(double angle, double phase)
{
    double result = 0.0;

    result = (phase - angle) / 4;

    return result;
}
