//a1764714,a1780903,a1810750,a1794041
#ifndef CRESCENDO_H
#define CRESCENDO_H
#include <iostream>
#include <string>
#include "Computer.h"

class Crescendo : public ComputerPlayer
{
    public: 
    	Crescendo();
    	char makeMove() ;
    	~Crescendo();
};

#endif
