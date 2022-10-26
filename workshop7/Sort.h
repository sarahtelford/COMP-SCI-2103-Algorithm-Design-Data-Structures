//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef SORT_H
#define SORT_H
#include <vector>

class Sort {
public:
	virtual std::vector<int> sort(std::vector<int> list) = 0; // virtual funcion
protected:
    std::vector<int> list;
};
#endif