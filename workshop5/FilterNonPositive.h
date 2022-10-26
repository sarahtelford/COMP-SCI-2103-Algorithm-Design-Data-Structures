//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"

#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

class FilterNonPositive: public FilterGeneric{ 
    public:
    FilterNonPositive();
    protected:
        int f(int x);
};
#endif