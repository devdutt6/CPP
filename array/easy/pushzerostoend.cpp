#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void pushZerosToEnd(int arr[], int n) {
  int i=0;
  int j=n-1;
  while(i<j){
    while( arr[i] != 0 && i<j ){
      i++;
    }
    while(arr[j] == 0 && j>i ){
      j--;
    }
    swap(arr[i], arr[j]);
    j--;
  }
}

int main() {
  int arr[] = {0, 0, 0, 4};

  pushZerosToEnd(arr, 4);

  for( int i=0;i<4;i++ ){
    cout << arr[i] << " ";
  }

  return 0;
}