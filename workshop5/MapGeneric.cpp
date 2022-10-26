//a1764714,a1780903,a1810750,a1794041,a1796553
#include "MapGeneric.h"
MapGeneric::MapGeneric(){ // constuuctor

}

std::vector<int> MapGeneric::map(std::vector<int> vect){
    if(vect.size()== 0){
        return results;
    }
    else{
        results.push_back(f(vect[0]));
        vect.erase(vect.begin());
        return map(vect);
    }

}