#include <bits/stdc++.h>
using namespace std;

// Q. Given an array arr[] of N weights. Find the least weight capacity of a boat to ship all weights within D days.The ith weight has a weight of arr[i]. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.

int getDaysIfLimit(vector<int>& arr, int mid, int N ){
  int sum = 0, count=0, i=0;
  while( i < N ){
    if(arr[i]>mid) return -1;
    sum += arr[i];
    if( sum<=mid ){
      i++;
      continue;
    }
    else{
      count++;
      sum = 0;
    }
  }
  return sum > 0 ? count+1 : count;
}

int leastWeight(vector<int>& arr, int target){
  int start = 1, end = 20, ans = 0;

  while(start<=end){
    int mid = (start+end) >> 1;
    int temp = getDaysIfLimit(arr, mid, arr.size());
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
  vector<int> arr = { 8, 9, 7, 6 }; // 13

  cout << leastWeight(arr, 3) << endl;

  return 0;
}