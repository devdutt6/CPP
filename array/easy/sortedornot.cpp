#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool arraySortedOrNot(int arr[], int n) {
  if(n<=1) return true;
  for(int i=1;i<n;i++){
    if( arr[i-1]>arr[i] ){
      return false;
    }
  }
  return true;
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  cout << "given array is sorted of value is 1 else not!" << endl << "and value is: " << arraySortedOrNot(arr, 9);

  return 0;
}