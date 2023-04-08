#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::binarySearch(std::vector<int> arr, int l, int r, int target){
      if(l < r)
    {
        int mid=(r + l)/2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] > target)
            return binarySearch(arr,l,mid -1, target);
        else
            return binarySearch(arr,mid + 1,r, target);
    }
    else if(arr[l] == target) return true;
    else return false;
};

bool RecursiveBinarySearch::search(std::vector<int> arr, int target){
    return binarySearch(arr, 0, arr.size() - 1, target);
};