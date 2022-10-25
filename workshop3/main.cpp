#include "Player.h"
#include <string>
#include <iostream>
#include <stdlib.h>

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

using namespace std;

int main()
{
    Avalanche *p1;
    p1 = new Avalanche;
    
    cout << p1->makeMove() <<endl;
    
    Bureaucrat *p2;
    p2 = new Bureaucrat;
    
    cout << p2->makeMove() <<endl;
    
    Toolbox *p3;
    p3 = new Toolbox;
    
    cout << p3->makeMove() <<endl;
    
    RandomComputer *p4;
    p4 = new RandomComputer;
    
    cout << p4->makeMove() <<endl;
    
    Crescendo *p5;
    p5= new Crescendo;
    
    cout << p5->makeMove() <<endl;
    
    PaperDoll *p6;
    p6= new PaperDoll;
    
    cout << p6->makeMove() <<endl;
    
    FistfullODollars *p7;
    p7= new FistfullODollars;
    
    cout << p7->makeMove() <<endl;
    
    HumanPlayer *p8;
    
    p8= new HumanPlayer;
    
    cout << p8->makeMove() << endl;
}
