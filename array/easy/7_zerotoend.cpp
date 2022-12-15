#include <bits/stdc++.h>
using namespace std;

// Q. your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order

/**
 * @brief it will push all the arrays to zeros to end maintaining order
 *
 * @param vector<int> arr
 */
void zerosToEnd(vector<int>& arr) {
  int i=0,k=0,n=arr.size();
  while(k<n){
    while(k<n){
      if( arr[k] != 0 ) break;
      k++;
    }

    swap(arr[i], arr[k]);
    i++;
    k=i+1;
  }

  return;
}

int main() {
  vector<int> arr = {0, 0, 0, 4, 1, 2, 0, 0, 2, 3, 4, 50, 0, 5, 3,2, 0};

  zerosToEnd(arr);

  for( auto i : arr ){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}