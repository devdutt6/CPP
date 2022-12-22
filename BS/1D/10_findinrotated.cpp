#include <bits/stdc++.h>
using namespace std;

/**
 * @brief find if the element exists in rotated sorted array
 *
 * @param vector<int>
 * @param int target
 * @return boolean
 */
int existinrotated(vector<int>& arr, int target){
  int start = 0, end = arr.size()-1;

  if( arr[start] ==  target || arr[end] == target){
    return 1;
  }

  if( arr[start] != target && arr[start] == arr[end] ){
    int temp = arr[start];

    while( arr[start] == temp ){
      start++;
    }
    while( arr[end] == temp ){
      end--;
    }
  }
  while( start<=end ){

    int mid = (start+end) >> 1;

    if( arr[mid] == target ){
      return 1;
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

  return 0;
}

int main(){
  vector<int> arr = { 1,0,1,1,1,1 };

  cout << existinrotated(arr, 0) << endl; // 1

  return 0;
}