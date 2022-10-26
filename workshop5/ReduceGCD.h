//a1764714,a1780903,a1810750,a1794041,a1796553
#include "ReduceGeneric.h"

#ifndef REDICEGCD_H
#define REDICEGCD_H

class ReduceGCD: public ReduceGeneric{ 
    public:
    ReduceGCD();
    protected:
        int binaryOperator(int x, int y);
};
#endif