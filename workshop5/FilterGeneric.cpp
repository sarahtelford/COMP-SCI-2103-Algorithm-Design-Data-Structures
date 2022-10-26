//a1764714,a1780903,a1810750,a1794041,a1796553
#include "FilterGeneric.h"
FilterGeneric::FilterGeneric(){ // constuuctor

}

std::vector<int> FilterGeneric::filter(std::vector<int> vect){
    if(vect.size()== 0){
        return results;
    }
    else{
        int temp = f(vect[0]);
        if(temp != 0){
            results.push_back(temp);
        }
        vect.erase(vect.begin());
        return filter(vect);
    }
}