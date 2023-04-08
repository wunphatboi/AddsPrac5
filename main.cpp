#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
int main(void){
    RecursiveBinarySearch r;
    std::vector<int> vec = {1,2,3,4,5};
    //std::vector<int> now = b->sort(vec);
    //std::vector<int> now2 = q->sort(vec);
    std::cout << r.search(vec,6);
    /*for (int i = 0; i < now2.size(); i++){
        std::cout << now2[i] << " ";
    }*/
    return 0;
}