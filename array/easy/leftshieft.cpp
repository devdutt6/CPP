#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// ?hard core
// void leftRotate(int arr[], int k, int n){
//   if( k%n == 0 ){
//     return;
//   }
//   if( k>n ){
//     k %= n;
//   }
//   int count = 0;
//   while( count<k ){
//     int temp = arr[0];
//       for( int i=1;i<n;i++ ){
//         arr[i-1] = arr[i];
//         if( i==n-1 ) arr[i] = temp;
//       }
//     count++;
//   }
// }
// ?optimised
void rev( int arr[], int l, int r ){
  while(l<r){
    swap(arr[l], arr[r]);
    l++;
    r--;
  }
}

void leftRotate(int arr[], int k, int n){
  if( k%n == 0 ){
    return;
  }
  if( k>n ){
    k %= n;
  }
  rev(arr, 0, k-1);
  rev(arr, k, n-1);
  rev(arr, 0, n-1);
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  // leftRotate(arr, 3, 9);
  leftRotate(arr, 3, 9);

  for( int i=0;i<9;i++ ){
    cout << arr[i] << " ";
  }

  return 0;
}