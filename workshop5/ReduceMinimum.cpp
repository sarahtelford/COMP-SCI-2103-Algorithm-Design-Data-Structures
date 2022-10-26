//a1764714,a1780903,a1810750,a1794041,a1796553
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum()
{ // constuctor
}

int ReduceMinimum::binaryOperator(int result, int x)
{
    if (result == 0)
    {
        return x;
    }
    else
    {
        if (x < result)
        {
            return x;
        }
        else
        {
            return result;
        }
    }
}
