#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
int main(void){
    Sort *s = new BubbleSort;
    std::vector<int> vec = {5,1,4,2,8};
    std::vector<int> now = s->sort(vec);
    for (int i = 0; i < now.size(); i++){
        std::cout << now[i] << " ";
    }
    return 0;
}