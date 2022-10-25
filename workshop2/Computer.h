#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

using namespace std;

class ComputerPlayer
{
public:
    ComputerPlayer();
	char makeMove( );  
    ~ComputerPlayer();
    char move;
    
};

#endif

