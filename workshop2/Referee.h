#ifndef REFEREE_H
#define REFEREE_H 
#include <iostream>
#include <string>
#include "Computer.h"
#include "Human.h"

using namespace std;

class Referee

{
public:
	Referee();
	char refGame(HumanPlayer player1, ComputerPlayer player2); // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
	char result; 
	~Referee();
};

#endif