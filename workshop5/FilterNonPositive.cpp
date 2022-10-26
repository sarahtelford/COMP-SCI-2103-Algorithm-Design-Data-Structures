//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"
#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive(){ // constuctor

}
    int FilterNonPositive::f(int x){
        if( x <= 0){
        return x;
        }
        else{
            return 0;
            }
    }
