#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){ // constuctor

}

    int FilterForTwoDigitPositive::f(int x){
        if( x >=10 && x < 100){
            return x;
        }
        else{
            return 0;
        }
    }
