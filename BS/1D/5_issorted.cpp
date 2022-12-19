#include <bits/stdc++.h>
using namespace std;

// Q. Check if the given array is sorted or not

/**
 * @brief checks and returns if the array is sorted in non decreasing order.
 *
 * @param vector<int>
 * @return boolean
 */
bool issorted(vector<int>& arr){
  int len = arr.size();

  for(int i=1;i<len;i++){
    if( arr[i-1]>arr[i] ) return false;
  }

  return true;
}

int main(){
  // vector<int> arr = { 1, 2, 8, 10, 11, 12, 15 };
  vector<int> arr = { -92, -72, -61, -20, 1, 3, 4, 10, 12, 13, 15, 17, 22, 23, 26, 28, 30, 32, 34, 35, 40, 54, 56, 58, 60, 61, 66, 70, 74, 75, 76, 78, 79, 81, 82, 86, 88, 92, 93, 95, 96, 98 };

  cout << issorted(arr) << endl; // 1(sorted)

  return 0;
}