//a1764714,a1780903,a1810750,a1794041,a1796553
#include "Mutator.h"
#include "Individual.h"

#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H 

class BitFlipProb: public Mutator
{
public:
	BitFlipProb(double p);
	std::string mutate(Individual * indPtr, int k);
	~BitFlipProb();
private:
	double probability;
};

#endif