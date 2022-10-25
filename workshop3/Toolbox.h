//a1764714,a1780903,a1810750,a1794041
#ifndef TOOLBOX_H
#define TOOLBOX_H
#include <iostream>
#include <string>
#include "Computer.h"

class Toolbox : public ComputerPlayer
{
    public:
	    Toolbox();
	    virtual char makeMove() ;
	    ~Toolbox();
};

#endif
