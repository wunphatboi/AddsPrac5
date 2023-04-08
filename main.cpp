#include <iostream>
#include <sstream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
int main(){
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> list;
    int num;
    while (iss >> num) {
        list.push_back(num);
    }
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