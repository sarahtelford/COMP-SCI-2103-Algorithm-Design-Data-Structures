//a1764714,a1780903,a1810750,a1794041
#include <iostream>
#include<string>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Player.h"

Referee::Referee() {
    Win = 'N' ;
}

char Referee::refGame(Player *Player1, Player *Player2){
    char moveOne = Player1->makeMove() ;
    char moveTwo = Player2->makeMove();
        
    if ((moveOne=='R') && (moveTwo=='S')){
            Win='W';
        }
    else if ((moveOne=='R') && (moveTwo=='P')){
            Win='L';
        }
    else if ((moveOne=='R') && (moveTwo=='R')){
            Win='T';
        }
    else if ((moveOne=='P') && (moveTwo=='P')){
            Win='T';
        }
    else if ((moveOne=='P') && (moveTwo=='S')){
            Win='L';
        }
    else if ((moveOne=='P') && (moveTwo=='R')){
        Win='W';
        }
    else if ((moveOne=='S') && (moveTwo=='P')){
                 Win='W';
             }
    else if ((moveOne=='S') && (moveTwo=='S')){
                     Win='T';
            }
    else if ((moveOne=='S') && (moveTwo=='R')){
                 Win='L';
        }    
    return Win;
}

Referee::~Referee(){
    
}

