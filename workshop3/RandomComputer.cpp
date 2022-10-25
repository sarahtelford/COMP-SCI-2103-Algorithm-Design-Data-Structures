//a1764714,a1780903,a1810750,a1794041
#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include "RandomComputer.h"

using namespace std;

RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove(){
    int rnum;
    srand(time(0));
    rnum = (rand() % 3) + 1;
    
    switch (rnum)
    {
        case 1:
            move = 'R' ;
            break;
        case 2:
            move = 'P' ;
            break;
        case 3:
            move = 'S' ;
            break;
    }
    
    return move ;
}

RandomComputer::~RandomComputer(){

}

