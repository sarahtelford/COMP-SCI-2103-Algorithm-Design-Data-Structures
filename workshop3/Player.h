//a1764714,a1780903,a1810750,a1794041
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player
{
	public:
	    Player() ;
	    virtual char makeMove() ;
	    char move ;
	     ~Player() ;
} ;

#endif
