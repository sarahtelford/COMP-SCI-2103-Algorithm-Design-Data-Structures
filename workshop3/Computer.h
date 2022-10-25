//a1764714,a1780903,a1810750,a1794041
#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
#include "Player.h"

class ComputerPlayer : public Player
{
    public:
	    ComputerPlayer(); // constructor
	    virtual char makeMove();
	    ~ComputerPlayer(); // deconstructor
};

#endif
