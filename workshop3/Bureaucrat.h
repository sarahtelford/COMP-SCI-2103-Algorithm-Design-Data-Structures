//a1764714,a1780903,a1810750,a1794041
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include "Computer.h"

class Bureaucrat : public ComputerPlayer
{
    public:
    Bureaucrat();
    virtual char makeMove() ;
    ~Bureaucrat();
};

#endif
