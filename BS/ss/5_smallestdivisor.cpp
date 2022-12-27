#include <bits/stdc++.h>
using namespace std;

// Q. You are given an array of integers nums and an integer K, your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given integer K. Each result of the division is rounded to the nearest integer greater than or equal to that element. For Example: 7/3 = 3.
// A = [1 2 5 9]
// 6
// Output:
// 5
int check(vector<int>& arr, int mid){
  int sum = 0;
  for( auto i : arr ){
    sum += (i+mid-1)/mid;
  }
  return sum;
}

int small(vector<int> arr, int limit){
  int start = 1, end = 1e9, ans = -1;
  while(start<=end){
    int mid = (start+end) >> 1;
    if( check(arr, mid)<=limit ){
      ans = mid;
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return ans;
}

int main(){
  // vector<int> arr = { 1, 2, 5, 9 };
  vector<int> arr = { 44, 33, 22, 11, 1 };

  cout << small(arr, 5) << endl;

  return 0;
}