//a1764714,a1780903,a1810750,a1794041
#ifndef AVALANCHE_H
#define AVALANCHE_H
#include <iostream>
#include <string>
#include "Computer.h"

class Avalanche : public ComputerPlayer
{
    public:
    Avalanche();
    virtual char makeMove() ;
    ~Avalanche();
};

#endif
