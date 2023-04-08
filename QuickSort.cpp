#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
      int size = list.size();

    if (size <= 1) {
        return list;
    }

    int pivotIndex = size >= 3 ? 2 : 0;
    int pivotValue = list[pivotIndex];
    std::vector<int> less, equal, greater;

    for (int i = 0; i < size; i++) {
        int element = list[i];
        if (element < pivotValue) {
            less.push_back(element);
        } else if (element == pivotValue) {
            equal.push_back(element);
        } else {
            greater.push_back(element);
        }
    }

    std::vector<int> sortedLess = sort(less);
    std::vector<int> sortedGreater = sort(greater);

    std::vector<int> sortedList;
    sortedList.reserve(sortedLess.size() + equal.size() + sortedGreater.size());
    sortedList.insert(sortedList.end(), sortedLess.begin(), sortedLess.end());
    sortedList.insert(sortedList.end(), equal.begin(), equal.end());
    sortedList.insert(sortedList.end(), sortedGreater.begin(), sortedGreater.end());

    return sortedList;
}
