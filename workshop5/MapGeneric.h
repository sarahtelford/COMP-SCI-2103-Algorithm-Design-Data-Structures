//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric {
public:
	MapGeneric();
	std::vector<int> map(std::vector<int> vec);

private:
    virtual int f(int x) = 0;
    std::vector<int> results;
};
#endif