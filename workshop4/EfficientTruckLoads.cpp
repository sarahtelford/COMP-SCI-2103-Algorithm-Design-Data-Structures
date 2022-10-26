//a1764714,a1780903,a1810750,a1794041

#include <iostream>

#include "EfficientTruckLoads.h"

EfficientTruckloads :: EfficientTruckloads()
{
    
}

EfficientTruckloads :: ~EfficientTruckloads()
{
    
}

int EfficientTruckloads :: numTrucks(int numCrates, int loadSize)
{
    if (numCrates < 1 )
    {
        return 0 ;
    }
    else if (loadSize < 1 )
    {
        return 0 ;
    }
    else if (numCrates <= loadSize)
    {
        return 1 ;
    }
    else if (numCrates % 2 != 0)
    {
        numCrates = numCrates - 1 ;
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize) ;
    }
    else
    {
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize) ;
    }
}
