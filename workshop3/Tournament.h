//a1764714,a1780903,a1810750,a1794041

#include <iostream>
#include <string>
#include <array>

#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"

class Tournament
{
public:
    Tournament() ;
    ~Tournament() ;
    
    Player * run(std::array<Player*,8> competitors);
    
private:
    int Game(Player *PlayerA, Player *PlayerB, int An, int Bn) ;
    int Winner;
    
} ;

#endif
