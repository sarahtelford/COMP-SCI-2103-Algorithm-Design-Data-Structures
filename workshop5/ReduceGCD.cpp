//a1764714,a1780903,a1810750,a1794041,a1796553
#include "ReduceGeneric.h"
#include "ReduceGCD.h"

ReduceGCD::ReduceGCD()
{ // constuctor
}

int ReduceGCD::binaryOperator(int result, int x)
{
    if (result == 0)
    {
        return x;
    }
    return binaryOperator(x % result, result);
}