#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>

using namespace std;

class HumanPlayer
{
public:
	HumanPlayer();
	char makeMove();  
	~HumanPlayer();
    char move;
};

#endif