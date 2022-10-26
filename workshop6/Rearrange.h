//a1764714,a1780903,a1810750,a1794041,a1796553
#include "Mutator.h"

#ifndef REARRANGE_H
#define REARRANGE_H 

class Rearrange: public Mutator
{
public:
	Rearrange();
	std::string mutate(Individual * indPtr, int k);
	~Rearrange();
};

#endif