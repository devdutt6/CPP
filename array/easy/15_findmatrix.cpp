#include <bits/stdc++.h>
using namespace std;

// Q. Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

/**
 * @brief checks if the element is present in the 2D vector or not using custom logic
 *
 * @param vector<vector<int>
 * @param target
 * @return boolean
 */
bool maxtrixSearch ( vector<vector<int>>& arr, int target ){
  int i=0, len = arr.size();
  for( int i=0;i<len;i++ ){
    if( arr[i][0] >= target || i == len-1 ){
      if( arr[i][0] == target ){
        return true;
      }
      else{
        int len2 = arr[i].size()-1;
        while( len2 > 0 && arr[i][len2] > target){
          len2--;
        }
        if( arr[i][len2] < target ){
          return false;
        }
        else{
          return true;
        }
      }
    }
  }

  return false;
}

/**
 * @brief checks if the element is present in the 2D vector or not using binary search
 *
 * @param vector<vector<int>>
 * @param target
 * @return boolean
 */
bool matrixBin(vector<vector<int>> &arr, int target){
  int lo = 0;
  if(!arr.size()) return false;
  int hi = (arr.size() * arr[0].size()) - 1;

  while(lo <= hi) {
    int mid = (lo + (hi - lo) / 2);
    if(arr[mid/arr[0].size()][mid % arr[0].size()] == target) {
      return true;
    }
    if(arr[mid/arr[0].size()][mid % arr[0].size()] < target) {
      lo = mid + 1;
    }
    else {
      hi = mid - 1;
    }
  }
  return false;
}

int main() {
  // vector<vector<int>> arr = {
  //   {10, 20, 30, 40},
  //   {15, 25, 35, 45},
  //   {27, 29, 37, 48},
  //   {32, 33, 39, 50},
  // };
  vector<vector<int>> arr = {
    {10, 20, 30, 40},
    {50, 60, 70, 80}
  };

  // cout << matrixBin(arr, 70) << endl;
  cout << maxtrixSearch(arr, 78) << endl;

  return 0;
}