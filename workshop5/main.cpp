//a1764714,a1780903,a1810750,a1794041,a1796553
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //initalising variables
   string input;
    vector<int> numbers;

    // taking line input
   getline(cin,input);

    stringstream ss(input);
    
    //removing commas and saving into numbers vector
    for (int i; ss >> i;) {
        numbers.push_back(i);
        if (ss.peek() == ','){
            ss.ignore();
        }
    }
    
    // Convert Original List
    //Find AbsolutveValues
    MapAbsoluteValue *Abs = new MapAbsoluteValue();
    vector<int> AbsoluteValues = Abs->map(numbers);

    //Triple Values
    MapTriple *Trip = new MapTriple();
    vector<int> Triples = Trip->map(AbsoluteValues);

    //Filtering
    //Filter TwoDigPositive
    FilterForTwoDigitPositive *TwoDigPos = new FilterForTwoDigitPositive();
    vector<int> PosTwoDig = TwoDigPos->filter(Triples);

    //Filter Odd
    FilterOdd *Odd = new FilterOdd();
    vector<int> Odds = Odd->filter(PosTwoDig);

    //Computing
    //Min
    ReduceMinimum *RedMin = new ReduceMinimum();
    int Min = RedMin->reduce(Odds);

    //GCD
    ReduceGCD *ComDom = new ReduceGCD();
    int GCD = ComDom->reduce(Odds);

    cout << Min << " " << GCD << endl;
}