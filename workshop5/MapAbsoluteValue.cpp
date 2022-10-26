//a1764714,a1780903,a1810750,a1794041,a1796553
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"

#include <cmath>

MapAbsoluteValue::MapAbsoluteValue(){ // constuctor

}
    int MapAbsoluteValue::f(int x){
        int result = abs(x);
        return result;
    }
