//a1764714,a1780903,a1810750,a1794041
#include <iostream>
#include <string>
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo(){

}

char Crescendo::makeMove(){
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
            move = 'R' ;
            count++ ;
            break ;
    }
    
    if (count == 3)
    {
        count = 0;
    }
    
    return move ;
}

Crescendo::~Crescendo(){

}
