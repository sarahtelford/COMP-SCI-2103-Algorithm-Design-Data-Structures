//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"
#include "FilterOdd.h"

FilterOdd::FilterOdd()
{ // constuctor
}
int FilterOdd::f(int x)
{
    if (x % 2 == 0)
    {
        return 0;
    }
    else
    {
        return x;
    }
}
