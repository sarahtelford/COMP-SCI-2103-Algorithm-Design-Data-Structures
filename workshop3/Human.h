//a1764714,a1780903,a1810750,a1794041
#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.h"

class HumanPlayer : public Player
{
	public:
	    HumanPlayer(); // constructor
	    virtual char makeMove() ;
	    ~HumanPlayer(); //deconstructor
};

#endif

