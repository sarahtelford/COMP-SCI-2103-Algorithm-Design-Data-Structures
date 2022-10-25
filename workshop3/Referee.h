//a1764714,a1780903,a1810750,a1794041
#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <string>
#include "Human.h"
#include "Computer.h"
#include "Player.h"

class Referee {
	public:
		Referee(); // constructor
		char refGame(Player *Player1, Player *Player2);
		char Win;
		~Referee();
};

#endif
