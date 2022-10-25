#include <iostream>
#include <string>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

int main()
{
	HumanPlayer *player1; 
	ComputerPlayer *player2;
	player2 = new ComputerPlayer(); 
	player1 = new HumanPlayer(); 

	player1->makeMove();
	player2->makeMove();
	cout << "Your move: " << player1->move << endl;
	cout <<  "Computer move: " << player2->move << endl;
	
	Referee *Ref;
	Ref = new Referee();



	Ref->refGame(player1, player2);

	cout <<  "Result " << endl;

}