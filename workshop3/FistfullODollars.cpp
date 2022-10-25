//a1764714,a1780903,a1810750,a1794041
#include <iostream>
#include <string>
#include "FistfullODollars.h"

using namespace std ;

FistfullODollars::FistfullODollars(){

}

char FistfullODollars::makeMove(){
    int count=0 ;
    
    switch (count)
    {
        case 0:
            move = 'R' ;
            count++ ;
            break;
        case 1:
            move = 'P' ;
            count++ ;
            break ;
        case 2:
            move = 'P' ;
            count++ ;
            break ;
    }
    
    if (count == 3)
    {
        count = 0;
    }
    
    return move ;
}

FistfullODollars::~FistfullODollars(){
    
}
