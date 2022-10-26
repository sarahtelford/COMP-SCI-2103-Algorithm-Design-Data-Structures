//a1764714,a1780903,a1810750,a1794041,a1796553
#include "ReduceGeneric.h"

#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

class ReduceMinimum: public ReduceGeneric{ 
    public:
    ReduceMinimum();
    protected:
        int binaryOperator(int x, int y);
};
#endif