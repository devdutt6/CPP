#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// ?sliding window works only for positive sorted
// void lenOfLongSubarr(int A[],  int N, int K) {
//   int sum = 0;
//   int  i =0;
//   int  j =0;
//   while( i<N && j<N ){
//     while(sum < K){
//       sum += A[i];
//       // cout << "sum: " <<sum<<endl;
//       i++;
//     }
//     if( sum >= K ){
//       if( sum == K ){
//         cout << i << " " << j ;
//         return;
//       }
//       else{
//         while( sum > K ){
//           sum -= A[j];
//           // cout << "sum: " <<sum<<endl;
//           j++;
//         }
//       }
//     }
//   }
//   cout << "no sum";
//   return ;
// }

int lenOfLongSubarr(int arr[], int N, int K){
  int sum = 0;
  int maxi = 0;
  map<int, int> mp;
  int i=0;
  while(i<N){
    sum += arr[i];
    if( sum == K ){
      return (i + 1);
    }
    if( mp[sum] > 0 ){
      if( maxi<(i-mp[sum]) ){
        maxi = i - mp[sum];
      }
    }
    else{
      mp[sum] = i;
    }
    i++;
  }
  return maxi;
}

int main() {
  int arr[] = {-13, 0, 6, 15, 16, 2 ,15, -12, 17, -16, 0 ,-3, 19, -3, 2, -9, 6};

  lenOfLongSubarr(arr, 17, 15);

  return 0;
}