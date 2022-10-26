//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

class FilterGeneric {
public:
	FilterGeneric();
	std::vector<int> filter(std::vector<int> vec);

private:
    virtual int f(int x) = 0;
    std::vector<int> results;
};
#endif