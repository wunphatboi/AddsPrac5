#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
int main(){
    std::vector<int> list = {0,3,5,4,-5,100,7777,2014};
    QuickSort quicksort;
    RecursiveBinarySearch binarysearch;
    std::vector<int> slist = quicksort.sort(list);
    bool found = binarysearch.search(slist,1);
    if (found == true){
        std::cout<< "true ";
        for (int i = 0; i < slist.size(); i++){
            std::cout << slist[i] << " ";
        }
    }
    if (found == false){
        std::cout<< "false ";
        for (int i = 0; i < slist.size(); i++){
            std::cout << slist[i] << " ";
        }
    }
    return 0;
}