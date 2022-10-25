int p1num, p2num ;

srand(time(0));
p1num = (rand() % 8) + 1;
p2num = (rand() % 8) + 1;


switch (p1num)
{
    case 1:
        HumanPlayer *Player1;
        Player1 = new HumanPlayer;
        break;
    case 2:
        Avalanche *Player1;
        Player1 = new Avalanche;
        break;
    case 3:
        Bureaucrat *Player1;
        Player1 = new Bureaucrat;
        break;
    case 4:
        Toolbox *Player1;
        Player1 = new Toolbox;
        break;
    case 5:
        RandomComputer *Player1;
        Player1 = new RandomComputer;
        break;
    case 6:
        Crescendo *Player1;
        Player1 = new Crescendo;
        break;
    case 7:
        PaperDoll *Player1;
        Player1 = new PaperDoll;
        break;
    case 8:
        FistfullODollars *Player1;
        Player1 = new FistfullODollars;
        break;
}

switch (p2num)
{
    case 1:
        HumanPlayer *Player2;
        Player2 = new HumanPlayer;
        break;
    case 2:
        Avalanche *Player2;
        Player2 = new Avalanche;
        break;
    case 3:
        Bureaucrat *Player2;
        Player2 = new Bureaucrat;
        break;
    case 4:
        Toolbox *Player2;
        Player2 = new Toolbox;
        break;
    case 5:
        RandomComputer *Player2;
        Player2 = new RandomComputer;
        break;
    case 6:
        Crescendo *Player2;
        Player2 = new Crescendo;
        break;
    case 7:
        PaperDoll *Player2;
        Player2 = new PaperDoll;
        break;
    case 8:
        FistfullODollars *Player2;
        Player2 = new FistfullODollars;
        break;
}





if (p2num == 1)
{
    HumanPlayer *Player2;
    Player2 = new HumanPlayer;
}
else if (p2num == 2)
{
    Avalanche *Player2;
    Player2 = new Avalanche;
}
else if (p2num == 3)
{
    Bureaucrat *Player2;
    Player2 = new Bureaucrat;
}
else if (p2num == 4)
{
    Toolbox *Player2;
    Player2 = new Toolbox;
}
else if (p2num == 5)
{
    RandomComputer *Player2;
    Player2 = new RandomComputer;
}
else if (p2num == 6)
{
    Crescendo *Player2;
    Player2 = new Crescendo;
}
else if (p2num == 7)
{
    PaperDoll *Player2;
    Player2 = new PaperDoll;
}
else if (p2num == 8)
{
    FistfullODollars *Player2;
    Player2 = new FistfullODollars;
}

    
if ((Player1=='R') && (Player2=='S'))
{
    Win='W';
}
else if ((Player1=='R') && (Player2=='P'))
{
    Win='L';
}
else if ((Player1=='R') && (Player2=='R'))
{
    Win='T';
}
else if ((Player1=='P') && (Player2=='P'))
{
    Win='T';
}
else if ((Player1=='P') && (Player2=='S'))
    {
        Win='L';
    }
else if ((Player1=='P') && (Player2=='R'))
    {
    Win='W';
    }
else if ((Player1=='S') && (Player2=='P'))
         {
             Win='W';
         }
else if ((Player1=='S') && (Player2=='S'))
         {
                 Win='T';
        }
else if ((Player1=='S') && (Player2=='R'))
     {
             Win='L';
    }
        
 return Win;
}
