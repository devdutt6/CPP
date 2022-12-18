#include <bits/stdc++.h>
using namespace std;

// Q. your task is to search for the key in the given array.

/**
 * @brief It will return the index of element in vector if found else will return -1 non reccursive way.
 *
 * @param vector<int>
 * @param int target
 * @return int index
 */
int findElementInSorted( vector<int>& arr, int target ){
  int i=0, j = arr.size() - 1, index = -1;

  while( i<j ){
    int mid = (i+j)/2;

    if( arr[mid] == target){
      return mid;
    }
    else if( arr[mid]>target ){
      j = mid-1;
      continue;
    }
    else{
      i = mid + 1;
      continue;
    }
  }

  return index;
}

/**
 * @brief It will return the index of element in vector if found else will return -1 reccursive way.
 *
 * @param vector<int>
 * @param int target
 * @param int start
 * @param int end
 * @return int index
 */
int findIndex( vector<int>& arr, int target, int start, int end ){
  if( end<start ){
    return -1;
  }
  int mid = (start+end)/2;

  if( arr[mid] == target ){
    return mid;
  }
  else if( arr[mid] > target ){
    return findIndex(arr, target, start, mid-1);
  }
  else{
    return findIndex(arr, target, mid+1, end);
  }
}

int main(){
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  // cout << "found element at: " << findElementInSorted(arr, 3) << endl; // 2
  cout << "found element at: " << findIndex(arr, 11, 0, arr.size()-1) << endl; //-1

  return 0;
}