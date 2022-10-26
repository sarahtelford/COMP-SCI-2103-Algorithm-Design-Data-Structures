//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
public:
	RecursiveBinarySearch(); // constructor
	bool search(std::vector<int> vect, int searchTerm); // virtual funcion
	int finder(std::vector<int> array, int first, int last, int find); //normal function
protected:

};
#endif