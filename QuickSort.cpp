#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
      int size = list.size();
    if (size <= 1) {
        return list;
    }
    int pindex = size >= 3 ? 2 : 0;
    int pvalue = list[pindex];
    std::vector<int> greater,less,equal;
    for (int i = 0; i < size; i++) {
        int value = list[i];
        if (value < pvalue) {
            less.push_back(value);
        } else if (value == pvalue) {
            equal.push_back(value);
        } else {
            greater.push_back(value);
        }
    }
    std::vector<int> llist = sort(less);
    std::vector<int> glist = sort(greater);
    std::vector<int> qslist;
    qslist.reserve(llist.size() + equal.size() + glist.size());
    qslist.insert(qslist.end(), llist.begin(), llist.end());
    qslist.insert(qslist.end(), equal.begin(), equal.end());
    qslist.insert(qslist.end(), glist.begin(), glist.end());
    return qslist;
};
