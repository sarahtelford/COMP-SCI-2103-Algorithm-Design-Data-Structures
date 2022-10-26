//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"

#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

class FilterForTwoDigitPositive: public FilterGeneric{ 
    public:
    FilterForTwoDigitPositive();
    protected:  
        int f(int x);
};
#endif