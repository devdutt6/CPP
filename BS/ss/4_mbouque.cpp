#include <bits/stdc++.h>
using namespace std;

// Q. To make one bouquet we need K adjacent flowers from the garden. Here the garden consists of N different flowers, the ith flower will bloom in the bloomDay[i]. Each flower can be used inside only one bouquets. We have to find the minimum number of days need to wait to make M bouquets from the garden. If we cannot make m bouquets, then return -1.

// ?first try
// bool checkNextK( vector<int>& arr, int index, int K, int mid ){
//   for( int i=0;i<K;i++ ){
//     if( (arr[index+i]+mid-1)/mid > 1 ){
//       return false;
//     }
//   }
//   return true;
// }

// int countBouque(vector<int>& arr, int K, int target){
//   int i = 0, sum = 0, N = arr.size();
//   while(i<N-K+1){
//     if( checkNextK(arr, i, K, target )){
//       i += K;
//       sum++;
//     }
//     else i++;
//   }
//   return sum;
// }

// ?second optimize
int countBouque(vector<int>& arr, int K, int target){
  int count = 0, sum = 0;

  for( auto i : arr ){
    if( i<=target ){
      count++;
    }
    else{
      count = 0;
    }
    if( count == K ){
      sum++;
      count = 0;
    }
  }

  return sum;
}

int main(){
  // int M = 2, K = 3;
  // vector<int> arr = {5, 5, 5, 5, 10, 5, 5}; // 10
  int M = 3, K = 2, ans = -1;
  vector<int> arr = {1, 10, 3, 10, 2}; // -1

  if( M*K>arr.size() ){
    return -1;
  }

  int start = 1, end = 1e9;

  while(start <= end){
    int mid = (start+end)/2;

    if( countBouque(arr, K, mid)>=M ) {
      ans = mid;
      end = mid-1;
    }
    else start = mid + 1;
  }

  // int checking  = countBouque(arr, K, start);
  // int got = checking < M ? -1 : start;
  cout << ans << endl;
  return 0;
}