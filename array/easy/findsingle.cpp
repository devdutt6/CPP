#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findi( int arr[], int N){
  for( int i=1;i<N;i+=2 ){
    // cout << i << endl;
    if( arr[i-1] != arr[i]){
      return arr[i-1];
    }
  }
  return arr[N-1];
}

int main() {
  int arr[] = {2, 2, 5, 5, 5, 5, 6};
  // int arr[] = {2, 2, 3, 5, 5};

  cout << "solo: "<< findi(arr, 7);

  return 0;
}