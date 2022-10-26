//a1764714,a1780903,a1810750,a1794041,a1796553
#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch(){ // constuuctor

}

bool RecursiveBinarySearch::search(std::vector<int> vect, int searchTerm){
	int temp = finder(vect, 0, vect.size()-1, searchTerm);
	if(temp != 0){
		return 1;
	}
	if(temp == 0){
		return 0;
	}
}


int RecursiveBinarySearch::finder(std::vector<int> vect, int first, int last, int find){
	 if (last >= first){
     	int centre = first + (last-first)/2;

	      if (vect[centre] == find){
	         return centre;
	      }

	      if (vect[centre] > find){
	         return finder(vect, first, centre-1, find);
	      }

	  	return finder(vect, centre+1, last, find);
	}
   return 0;
}
