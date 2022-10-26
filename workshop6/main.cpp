//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
	Individual * mutated = new Individual(mPtr->mutate(&indPtr[0], k)); 

	return mutated;
}

int main(){
	std::string str1;
	std::string str2;
	int k1, k2;

	std::cin >> str1 >> k1 >> str2 >> k2;

	Individual * binarystr1 = new Individual(str1); 
	Individual * binarystr2 = new Individual(str2); 

	BitFlip * BitFlipper = new BitFlip(); 
	Rearrange * Rearranger = new Rearrange();

	 binarystr1 =  execute(binarystr1, BitFlipper, k1);
	//  binarystr1 =  execute(binarystr1, Rearranger, k2);

	//  binarystr2 =  execute(binarystr2, BitFlipper, k1);
	 binarystr2 =  execute(binarystr2, Rearranger, k2);

	std::cout << binarystr1->getString() << " " << binarystr2->getString() << " " << binarystr2->getMaxOnes() << std::endl;

}

