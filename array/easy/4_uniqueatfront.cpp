#include <bits/stdc++.h>
using namespace std;

// Q. Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

/**
 * @brief remove duplicates returns the total number of unique elements and shiefts all the unique element in front.
 *
 * @param vector<int>
 * @return int unique elements in vector.
 */
int remove_duplicate(vector<int>& arr){
  int i=0, j=0, len = arr.size();
  while(i<len && j<len){
    if( arr[i] == arr[j] ) j++;
    else{
      i++;
      swap(arr[i], arr[j]);
      j++;
    }
  }

  return i+1;
}

int main() {
  vector<int> arr = { 1, 2, 2, 2, 3, 3, 4, 4, 4, 6, 7, 8, 9 };

  int n = remove_duplicate(arr);

  cout << "unique numbers are: " << n <<endl;
  for( auto i : arr ){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}