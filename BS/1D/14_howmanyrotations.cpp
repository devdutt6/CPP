#include <bits/stdc++.h>
using namespace std;

// Q. Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

/**
 * @brief it will return that how many times a sorted array is right rotated
 *
 * @param vector<int> arr
 * @return int
 */
int findKRotation(vector<int>& arr) {
  int start = 0, end = arr.size()-1;

  while( start<= end ){
    int mid = (start+end) >> 1;
    if( mid>0 && arr[mid]<arr[mid-1] ){
      return mid;
    }
    else if( arr[0] > arr[mid] ){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }

  return 0;
}

int main(){
  vector<int> arr = { 66, 72, 79, 86, 95, 104, 106, 110, 119, 123, 124, 129, 132, 136, 137, 142, 150, 2, 12, 14, 17, 26, 30, 36, 38, 46, 52, 60 };

  cout << findKRotation(arr) << endl; // 17

  return 0;
}