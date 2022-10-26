//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "BitFlipProb.h"
#include "Mutator.h"
#include "Individual.h"

BitFlipProb::BitFlipProb(double probability){
     probability = 1;
}

std::string BitFlipProb::mutate(Individual * indPtr, int k){
    	Individual * BitFlipped = new Individual(indPtr->getString());
    	for(int i =1; i < BitFlipped->getLength(); i++){
            BitFlipped->flipBit(i);
        }
        return BitFlipped->getString();
}

BitFlipProb::~BitFlipProb(){

}