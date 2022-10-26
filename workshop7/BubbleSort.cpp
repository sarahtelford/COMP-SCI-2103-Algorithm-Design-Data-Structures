//a1764714,a1780903,a1810750,a1794041,a1796553
#include "BubbleSort.h"
#include "Sort.h"

BubbleSort::BubbleSort()
{ // constuuctor
}

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    bool sorted = 0;
    while (sorted == 0)
    {
        bool isSorted = 1;
        for (int i = 0; i < list.size() - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                std::swap(list[i], list[i + 1]);
            }
        }
        int temp = list[0];
        for (int i = 1; i < list.size(); i++)
        {
            if (list[i] < temp)
            {
                isSorted = 0;
            }
        }
        if (isSorted == 1)
        {
            sorted = 1;
        }
    }
    return list;
}
