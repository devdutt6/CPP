#include <bits/stdc++.h>
using namespace std;

// Q. Given an array of N integers, left rotate the array by one place

/**
 * @brief the function will leftshieft the vector by one element
 *
 * @param vector<int>
 */
void leftShieftOne(vector<int>& arr){
  int len = arr.size();
  int temp = arr[0];
  for(int i=0;i<len;i++){
    if( i == len-1 ) arr[i] = temp;
    else{
      arr[i] = arr[i+1];
    }
  }

  return;
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  leftShieftOne(arr);

  for( auto i : arr ){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}

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
// void rev( int arr[], int l, int r ){
//   while(l<r){
//     swap(arr[l], arr[r]);
//     l++;
//     r--;
//   }
// }

// void leftRotate(int arr[], int k, int n){
//   if( k%n == 0 ){
//     return;
//   }
//   if( k>n ){
//     k %= n;
//   }
//   rev(arr, 0, k-1);
//   rev(arr, k, n-1);
//   rev(arr, 0, n-1);
// }