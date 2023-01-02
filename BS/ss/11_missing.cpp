#include <bits/stdc++.h>
using namespace std;

// Q. Given an increasing sequence a[], we need to find the K-th missing contiguous element in the increasing sequence which is not present in the sequence. If no k-th missing element is there output -1.

int missing(vector<int>& arr, int k){
  int lastperf, count = 0, n = arr.size(), i = 0;
  while( i<n-1 ){
    if( arr[i+1]-arr[i] == 1 ){
      i++;
      continue;
    }
    lastperf = arr[i]+1;
    count++;
    cout << count << " " << lastperf << endl;
    while( count<k && lastperf<arr[i+1]-1 ){
      lastperf += 1;
      count++;
    cout << count << " " << lastperf <<" " <<arr[i+1]<< endl;
    }
    if(count == k) return lastperf;
    i++;
  }
  return -1;
}

int main(){
  // vector<int> arr = { 1, 2, 3, 4, 5 }; // -1
  vector<int> arr = { 1, 3, 4, 5, 7, 8 }; // 6
  // vector<int> arr = { 5, 6, 8, 18, 29, 57, 59, 60, 76, 80, 82, 86, 90, 92, 98 }; // 19

  cout << missing(arr, 2) << endl;

  return 0;
}