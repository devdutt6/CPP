#include <bits/stdc++.h>
using namespace std;

// Q. There is a new barn with N stalls and C cows. The stalls are located on a straight line at positions x1,….,xN (0 <= xi <= 1,000,000,000). We want to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

int getCount(vector<int>& arr, int mid){
  int count = 1, lastcowat = arr[0];
  for(auto i : arr){
    if( i-lastcowat >= mid ){
      count++;
      lastcowat = i;
    }
  }
  return count;
}

int aggresive(vector<int>& arr, int cows){
  int start = 0, end = 1e9, ans = INT_MIN;

  while(start<=end){
    int mid = (start+end) >> 1;

    if( getCount(arr, mid) < cows ){
      end = mid-1;
    }
    else{
      ans = max( ans, mid );
      start = mid+1;
    }
  }

  return ans;
}

int main(){
  vector<int> arr = { 1, 2, 8, 4, 9 };

  sort(arr.begin(), arr.end());
  cout  << aggresive(arr, 3) << endl;

  return 0;
}