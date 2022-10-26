//a1764714,a1780903,a1810750,a1794041

#include <iostream>
#include <string>

using namespace std ;

#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

int main()
{
    //initialise inputs
    int  numCrates, loadSize ;
    string s, iin   ;
    
    //Inputs
    cin >> iin >> s >> numCrates >> loadSize ;
    
    int i = stoi(iin) ;

    Reverse *number = new Reverse ;
    Reverse *word = new Reverse ;
    Truckloads *truck1 = new Truckloads ;
    EfficientTruckloads *truck2 = new EfficientTruckloads ;

    string rsOut = word->reverseString(s) ;
    
    int riOut ;
    
    int tlOut = truck1->numTrucks(numCrates, loadSize) ;
    int  etlOut = truck2->numTrucks(numCrates, loadSize) ;
    
    int rev1count = 0 ;
    int truckCount = 1 ;
    
    if (i > -1)
    {
        riOut = number->reverseDigit(i) ;
        
        rev1count++ ;
    }
    
    if (tlOut == 0)
    {
        truckCount = 0 ;
    }
    
    if ((rev1count == 0) && (truckCount == 0))
    {
        cout << "ERROR" << ' ' << rsOut << ' ' << "ERROR" << ' ' << "ERROR" << endl ;
    }
    else if (rev1count == 0)
    {
        cout << "ERROR" << ' ' << rsOut << ' ' << tlOut << ' ' << etlOut << endl ;
    }
    
    else if (truckCount == 0)
    {
        cout << riOut << ' ' << rsOut << ' ' << "ERROR" << ' ' << "ERROR" << endl ;
    }
    else
    {
        cout << riOut << ' ' << rsOut << ' ' << tlOut << ' ' << etlOut << endl ;
    }

}
