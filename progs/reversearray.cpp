#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> rev(vector<int> arr, int i, int j ) {
  if( j<=i ){
    return arr;
  }
  else{
    swap(arr[i], arr[j]);
    return rev(arr, i+1, j-1);
  }
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };

  vector<int> arr2 = rev(arr, 0, arr.size()-1);

  for( auto i = arr2.begin(); i<arr2.end(); i++ ){
    cout<< *i << " ";
  }
  return 0;
}