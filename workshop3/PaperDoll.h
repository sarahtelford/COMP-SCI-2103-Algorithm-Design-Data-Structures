//a1764714,a1780903,a1810750,a1794041
#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <iostream>
#include <string>

class PaperDoll : public ComputerPlayer
{
    public:
    	PaperDoll();
    	char makeMove();
    	~PaperDoll();
} ;

#endif
