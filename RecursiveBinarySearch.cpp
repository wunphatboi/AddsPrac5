#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::binarySearch(std::vector<int> arr, int l, int r, int x){
      if(l < r)
    {
        int mid=(r + l)/2;
        if (arr[mid] == x)
            return true;
        else if (arr[mid] > x)// this was correct after all
            return binarySearch(arr,l,mid -1, x);
        else
            return binarySearch(arr,mid + 1,r, x);// was error here
    }
    else if(arr[l] == x) return true;// found x
    else return false;// x not found
};

bool RecursiveBinarySearch::search(std::vector<int> arr, int target){
    return binarySearch(arr, 0, arr.size() - 1, target);
};