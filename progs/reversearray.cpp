#include <bits/stdc++.h>

using namespace std;
// Q. Reverse a given array

// inplace O(n/2) TC
void rev(vector<int>& arr, int i, int j ) {
  if( j<=i ) return;
  // else
  swap(arr[i], arr[j]);
  return rev(arr, i+1, j-1);
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };

  rev(arr, 0, arr.size()-1);

  for( auto i : arr ){
    cout<< i << " ";
  }
  cout << endl;

  return 0;
}