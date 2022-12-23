#include <bits/stdc++.h>
using namespace std;

// Q. There is an integer array nums sorted in ascending order (with distinct values). Given the array nums after the possible clockwise rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. We need to search a given element in a rotated sorted array.

/**
 * @brief find the element's index in rotated sorted array
 *
 * @param vector<int>
 * @param int target
 * @return int index
 */
int findinrotated(vector<int>& arr, int target){
  int start = 0, end = arr.size()-1;

  while( start<=end ){
    int mid = (start+end) >> 1;

    if( arr[mid] == target ){
      return mid;
    }

    if( arr[start] <= arr[mid] ){
      if( arr[mid] >= target && arr[start] <= target ){
        end = mid-1;
      }
      else{
        start = mid+1;
      }
    }
    else{
      if( arr[mid] <= target && arr[end] >= target ){
        start = mid+1;
      }
      else{
        end = mid-1;
      }
    }
  }

  return -1;
}

int main(){
  vector<int> arr = { 4,5,6,7,0,1,2 };

  cout << findinrotated(arr, 5) << endl; // 1
  cout << findinrotated(arr, 3) << endl; // -1

  return 0;
}