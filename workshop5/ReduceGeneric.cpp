//a1764714,a1780903,a1810750,a1794041,a1796553
#include "ReduceGeneric.h"
ReduceGeneric::ReduceGeneric(){ // constuuctor
result = 0;
}

int ReduceGeneric::reduce(std::vector<int> vect){
    if(vect.size()== 0){
        return result;
    }
    else{
        int temp = binaryOperator(result,vect[0]);
        result = temp;
        vect.erase(vect.begin());
        return reduce(vect);
    }
}