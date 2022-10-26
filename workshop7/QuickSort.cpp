//a1764714,a1780903,a1810750,a1794041,a1796553

#include "Sort.h"
#include "QuickSort.h"

QuickSort::QuickSort(){ // constuuctor

}

std::vector<int> QuickSort::sort(std::vector<int> list){
    std::vector<int> sorted = list;
    sorting(sorted, 0, list.size()-1);
    return sorted;
}

int QuickSort::partition(std::vector<int> &v, int start, int end) {
	int pivot = end;
	int j = start;
	for(int i=start;i<end;++i){
		if(v[i]<v[pivot]){
			std::swap(v[i],v[j]);
			++j;
		}
	}
	std::swap(v[j],v[pivot]);
	return j;
}

void QuickSort::sorting(std::vector<int> &v, int start, int end ) {
	if(start<end){
		int p = partition(v,start,end);
		sorting(v,start,p-1);
		sorting(v,p+1,end);
	}
}


