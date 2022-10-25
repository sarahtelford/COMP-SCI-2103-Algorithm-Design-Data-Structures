//a1764714,a1780903,a1810750,a1794041

#include <iostream>
#include <string>
#include <array>

#include "Tournament.h"
using namespace std;

#include "Referee.h"
#include "Player.h"

//extern Player Game(Player, Player);

Tournament :: Tournament() 
{
    
}

Tournament :: ~Tournament()
{
    
}

int Tournament :: Game(Player *PlayerA, Player *PlayerB, int An, int Bn)
{
    Referee Reff ;
    
    
    int Ac = 0 ; int Bc = 0 ;
    
    for (int i=0 ; i<5; i++)
    {
        char g ;
        g = Reff.refGame(PlayerA, PlayerB) ;
        
        if (g == 'W' || g == 'T')
        {
            Ac++;
        }
        else
        {
            Bc++;
        }
    }
    
    if (Ac>Bc)
    {
        Winner = An ;
    }
    else if (Bc>Ac)
    {
        Winner = Bn ;
    }
    else if (Bc==Ac)
    {
        Winner = An ;
    }
    
    return Winner ;
}


Player * Tournament :: run(std::array<Player*,8> competitors)
{
    Player *Champion ;
    Champion = new Player ;
    
    //Champion = Game(Game(Game(competitors[0], competitors[1], 0, 1),Game(competitors[2], competitors[3])),Game(Game(competitors[4], competitors[5]),Game(competitors[6], competitors[7]))) ;
    
    //Round 1
    int R1G1, R1G2, R1G3, R1G4 ;
    
    R1G1 = Game(competitors[0], competitors[1], 0, 1) ;
    R1G2 = Game(competitors[2], competitors[3], 2, 3) ;
    R1G3 = Game(competitors[4], competitors[5], 4, 5) ;
    R1G4 = Game(competitors[6], competitors[7], 6, 7) ;
    
    //Round 2
    int R2G1, R2G2 ;
    
    R2G1 = Game(competitors[R1G1], competitors[R1G2], R1G1, R1G2) ;
    R2G2 = Game(competitors[R1G3], competitors[R1G4], R1G3, R1G4) ;
    
    //Round 3
    int ChampNumber ;
    
    ChampNumber = Game(competitors[R2G1], competitors[R2G2], R2G1, R2G2) ;
    
    Champion = competitors[ChampNumber] ;
    
    return Champion;


}
