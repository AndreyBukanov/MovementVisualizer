#include "tangent_full_turn.h"

TangentFullTurn::TangentFullTurn()
{

}

double TangentFullTurn::value(double angle, double phase)
{
    double result = 0.0;

    result = (phase - angle) / 8;

    return result;
}
