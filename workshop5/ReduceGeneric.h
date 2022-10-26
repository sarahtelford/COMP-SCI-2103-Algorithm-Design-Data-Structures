//a1764714,a1780903,a1810750,a1794041,a1796553
//a1764714,a1780903,a1810750,a1794041,a1796553
#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {
public:
	ReduceGeneric();
	int reduce(std::vector<int> vec);

private:
    virtual int binaryOperator(int x, int y) = 0;
    int result;
};
#endif