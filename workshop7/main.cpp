//a1764714,a1780903,a1810750,a1794041,a1796553

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
//     BubbleSort * Bubble = new BubbleSort();
    QuickSort * Quick = new QuickSort();

    string input;
    vector<int> vect;

    // taking line input
   getline(cin,input);

    stringstream ss(input);
    
    for (int i; ss >> i;) {
        vect.push_back(i);
    }

     //    for(int i = 0; i < vect.size(); i++){
     //    std::cout << vect[i] << " ";
     //    }

    vector<int> sorted = Quick->sort(vect);

    RecursiveBinarySearch * L = new RecursiveBinarySearch();
//     int n = 9;
    bool found = L->search(sorted, 1);

   if(found == 0 ) {
        std::cout << "false ";
        for(int i = 0; i < vect.size(); i++){
        std::cout << sorted[i] << " ";
        }
        std::cout << endl;
   }
   else {
        std::cout << "true ";
        for(int i = 0; i < vect.size(); i++){
            std::cout << sorted[i] << " ";
        }
        std::cout << endl;
   }
   return 0;

}