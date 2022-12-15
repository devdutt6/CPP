#include <bits/stdc++.h>
using namespace std;

// Q. find if num is present in the given array or not. If present print the index of the element or print -1.

/**
 * @brief functions returns the index if element with value found else returns -1
 *
 * @param vector<int> arr
 * @param int k
 * @return int index || -1
 */
int exists(vector<int>& arr, int k){
  int len = arr.size();
  int mid = round(arr.size()/2);

  for(auto i: arr){
    if( arr[i] == k ) return i;
  }

  return -1;
}

int main() {
  vector<int> arr = {4 ,3, 2, 1};

  cout << exists(arr, 1) << endl;

  return 0;
}