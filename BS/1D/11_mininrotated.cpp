#include <bits/stdc++.h>
using namespace std;

// Q. Given the sorted rotated array nums of unique elements, return the minimum element of this array.

/**
 * @brief find minimum element in rotated sorted array
 *
 * @param vector<int>
 * @return int min
 */
int findmin(vector<int>& arr){
  int start = 0, end = arr.size()-1, minValue = INT_MAX;

  while( start<=end ){
    if( arr[end] > arr[start] ){
      minValue = min(minValue, arr[start]);
      break;
    }

    int mid = (start+end) >> 1;
    if( arr[start] <= arr[mid] ){
      minValue = min(minValue, arr[mid]);
      start = mid + 1;
    }
    else{
      minValue = min(minValue, arr[mid]);
      end = mid - 1;
    }
  }

  return minValue;
}

int main(){
  vector<int> arr = { 7,0,1,2,3,4,5,6 };

  cout << findmin(arr) << endl; // 0

  return 0;
}