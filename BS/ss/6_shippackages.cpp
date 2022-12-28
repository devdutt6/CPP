#include <bits/stdc++.h>
using namespace std;

// Q. Given an array arr[] of N weights. Find the least weight capacity of a boat to ship all weights within D days.The ith weight has a weight of arr[i]. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.

int check(vector<int>& arr, int mid ){
  int sum = 0, count=0;
  for( auto i : arr ){
    if(i>mid) return -1;
    if( sum+i<=mid ){
      sum += i;
      continue;
    }
    sum > 0 ? count++ : false;
    sum = 0;
    count++;
  }
  return sum>0 ? count+1 : count;
}

int leastWeight(vector<int>& arr, int target){
  int start = 1, end = 20, ans = 0;

  while(start<=end){
    int mid = (start+end) >> 1;
    int temp = check(arr, mid);
    cout << temp << "->" << mid << endl;
    if( temp != -1 ){
      if( temp <= target ){
        ans = mid;
        end = mid-1;
      }
      else{
        start = mid+1;
      }
    }
    else{
      start = mid+1;
    }
  }
  return ans;
}

int main(){
  vector<int> arr = { 9, 8, 10 }; // 10
  // vector<int> arr = { 1, 2, 1 }; // 3

  // cout << check(arr, 5) << endl;
  cout << leastWeight(arr, 3) << endl;

  return 0;
}