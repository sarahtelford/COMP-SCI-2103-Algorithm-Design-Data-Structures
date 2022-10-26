//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "Individual.h"

#ifndef MUTATOR_H
#define MUTATOR_H 

class Mutator{
public:
	Mutator();
	virtual std::string mutate(Individual * indPtr, int k) = 0;
	~Mutator();
};



#endif