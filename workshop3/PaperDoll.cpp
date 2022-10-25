//a1764714,a1780903,a1810750,a1794041
#include <iostream>
#include <string>
#include "PaperDoll.h"

using namespace std ;

PaperDoll::PaperDoll(){

}

char PaperDoll::makeMove(){
    int count=0 ;
    
    switch (count)
    {
        case 0:
            move = 'P' ;
            count++ ;
            break;
        case 1:
            move = 'S' ;
            count++ ;
            break ;
        case 2:
            move = 'S' ;
            count++ ;
            break ;
    }
    
    if (count == 3)
    {
        count = 0;
    }
    
    return move ;
}

PaperDoll::~PaperDoll(){

}