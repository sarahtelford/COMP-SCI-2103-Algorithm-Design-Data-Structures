//a1764714,a1780903,a1810750,a1794041,a1796553
#include "Mutator.h"

#ifndef BITFLIP_H
#define BITFLIP_H 

class BitFlip: public Mutator
{
public:
	BitFlip();
	std::string mutate(Individual * indPtr, int k);
	~BitFlip();
};


#endif