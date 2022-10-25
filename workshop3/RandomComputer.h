//a1764714,a1780903,a1810750,a1794041
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include <iostream>
#include <string>
#include "Computer.h"

class RandomComputer : public ComputerPlayer
{
    public:
	    RandomComputer();
	    virtual char makeMove() ;
	    ~RandomComputer();
	};

#endif
