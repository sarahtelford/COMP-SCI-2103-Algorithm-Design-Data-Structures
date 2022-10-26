//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"

	BitFlip::BitFlip(){

	}

	std::string BitFlip::mutate(Individual * indPtr, int k){
		if(k > indPtr->getLength()){
			k = k - indPtr->getLength();
		}
		Individual * BitFlipped = new Individual(indPtr->getString());
		BitFlipped->flipBit(k);
		return BitFlipped->getString();
	}

// 			if ((indPtr.length() > k) || (indPtr.length() > 0)){
	
// 			std::string posNum1; 
// 			posNum1 = indPtr.at(k-1); 

// 			if (posNum1 == "0"){
// 				posNum1 = "1"; 

// 			}

// 			else {
// 				posNum1 = "0"; 
// 			}

// 			std::string newString ;

// 			if (k != 0)
// 			{
// 			for (int i=0 ; i<k ; i++)
// 				{
// 				std::string posNumThing ;
// 				posNumThing = indPtr.at(i); 

// 				newString += posNumThing ;

// 				}
// 			}

// 			newString += posNum1 ;

// 			if (k != indPtr.length())
// 			{
// 			for (int i=k+1 ; i<indPtr.length() ; i++)
// 			{
// 				std::string posNumThing ;
// 				posNumThing = indPtr.at(i); 

// 				newString += posNumThing ;
// 			}
// 			}

// 			indPtr = newString; 

// }

	BitFlip::~BitFlip(){

	}

