#include <iostream>
#include <string>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std; 

Referee::Referee(){
	result = '0';

}

char Referee::refGame(HumanPlayer player1, ComputerPlayer player2) // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
{

	char pMove = player1.makeMove(); 

	// switch(pMove) {
	// 	case 'R':
	// 		result = 'T';
	// 		break; 
	// 	case 'P':
	// 		result = 'W';
	// 		break; 
	// 	case 'S':
	// 		result = 'L';
	// 		break; 
	// 	}

// return result;

	if (pMove == 'R'){
		 result = 'T'; 
	}

	if (pMove == 'S'){
		 result = 'L'; 
	}

	if (pMove == 'P'){
		 result = 'W'; 
	}

	return result;
	// else if (player1.move == 'P' && player2.move == 'P') {
	// 	result = 'T'; 
	// 	return result; 
	// }

	// else if (player1.move == 'S' && player2.move == 'S') {
	// 	result = 'T'; 
	// 	return result; 
	// }

	// else if (player1.move== 'R' && player2.move == 'P') {
	// 	result = 'L'; 
	// 	return result; 
	// }
	
	// if (player1.move == 'S') {
	// 	result = 'L'; 
	// 	 return result;
	// }
 	// && player2.move== 'R'

	// else if (player1.move == 'P' && player2.move== 'S') {
	// 	result = 'L'; 
	// 	return result; 
	// }

	// else if (player1.move == 'S' &&player2.move == 'P') {
	// 	result = 'W'; 
	// 	return result; 
	// }

	// else if (player1.move == 'R' && player2.move == 'S') {
	// 	result = 'W'; 
	// 	return result; 
	// }

	// if (player1.move == 'P') { 
	// 	result = 'W'; 
	// 	return result;
	// }
	// && player2.move== 'R'

}

Referee::~Referee(){


}