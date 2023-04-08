#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
public:
    bool binarySearch(std::vector<int> arr, int l, int r, int x);
    bool search(std::vector<int> arr, int target);
};
#endif