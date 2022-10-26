//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort {
public:
	QuickSort(); // constructor
	std::vector<int> sort(std::vector<int> list); 
    void sorting(std::vector<int> &list, int left, int right);
    int partition(std::vector<int> &list, int left, int right);
protected:

};
#endif