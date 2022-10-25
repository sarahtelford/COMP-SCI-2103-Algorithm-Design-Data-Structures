//a1764714,a1780903,a1810750,a1794041
#include <iostream>
#include <string>
#include "Human.h"

HumanPlayer::HumanPlayer(){
   move='A';
}

char HumanPlayer::makeMove(){
    std::cout << "Enter move: " ;
    std::cin >> move;
    return move;
}

HumanPlayer::~HumanPlayer(){

}