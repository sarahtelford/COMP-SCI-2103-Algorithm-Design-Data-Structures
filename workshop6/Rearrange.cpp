//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "Mutator.h"
#include "Rearrange.h"

	Rearrange::Rearrange(){

	}

	std::string Rearrange::mutate(Individual * indPtr, int k){
		if(k > indPtr->getLength()){
			k = k - indPtr->getLength();
		}
		
		std::string rearrangedDNA = "";

		for(int i = k-1; i <= indPtr->getLength()-1; i++ ){
			rearrangedDNA.push_back(indPtr->getString()[i]);
	}
		for(int i = 0; i < k-1 ; i++){
			rearrangedDNA.push_back(indPtr->getString()[i]);
		}

		Individual * Rearranged = new Individual(rearrangedDNA);
		return Rearranged->getString();
	}

	Rearrange::~Rearrange(){

	}