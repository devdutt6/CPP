#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int print2largest(int arr[], int n) {
  int max = INT_MIN;
  for( int i=0;i<n;i++ ){
    if( arr[i]>max ){
      max = arr[i];
    }
  }

  int s_max = -1;
  int modsub = INT_MAX;
  for( int i=0;i<n;i++ ){
    if( max-arr[i] < modsub && max-arr[i] > 0){
      modsub = max-arr[i];
      s_max = arr[i];
    }
  }

  return s_max;
	}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  cout << "second largest is: " << print2largest(arr, 9);

  return 0;
}