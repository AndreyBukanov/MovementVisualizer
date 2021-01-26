#include "sinus_single_leaf.h"

SinusSingleLeaf::SinusSingleLeaf()
{

}

double SinusSingleLeaf::value(double angle, double phase)
{
    double result = 0.0;

    if(angle > phase) // leg on air
    {
        result = sin( ( (Math::pi2 - angle) * Math::pi ) / (Math::pi2 - phase) );
    }

    return result;
}
