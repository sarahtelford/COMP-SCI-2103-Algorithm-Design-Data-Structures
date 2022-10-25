#include <iostream>
#include <string>
#include "Human.h"


using namespace std;

HumanPlayer::HumanPlayer(){
	move = '0';
}


char HumanPlayer::makeMove(){


	// cout << "Enter Move: ";

	cin >> move ;

	return move;

	// move = playerMove;

	// int stat = 0; 

	//while (move == ' '){

 // 	switch (playerMove) {
 // 		case 'R' | 'r':
 // 		move = 'R';
	// 	// stat = 1;
 // 		break; 

 // 		case 'P' | 'p':
 // 		move = 'P';
 // 		// stat = 1;
 // 		break; 

 // 		case 'S' | 's':
 // 		move = 'S';
 // 		// stat = 1;
 // 		break; 

 // 		default: 
 // 		cout << "Invalid entry. Game Exiting."<< endl;
 // 		break; 
 // 	}
 // //}



}

HumanPlayer::~HumanPlayer(){
}
