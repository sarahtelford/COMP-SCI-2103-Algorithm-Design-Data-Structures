//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"

#ifndef FILTERODD_H
#define FILTERODD_H

class FilterOdd: public FilterGeneric{ 
    public:
    FilterOdd();
    protected:
        int f(int x);
};
#endif