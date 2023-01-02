#include <bits/stdc++.h>
using namespace std;

// Q. Given an array and a number k, find the largest sum of the subarray containing at least k numbers. It may be assumed that the size of array is at-least k

// ? not solution it is for sorted
// int maxelementsum( vector<int>& arr, int K ){
//   int n = arr.size()-1, count = 1;
//   int lastele = arr[n], i = n-1;
//   int sum = lastele;
//   cout << "last element: " << lastele << endl;
//   while(i>=0){
//     if( count >= K ) break;
//     if( arr[i] != lastele ){
//       lastele = arr[i];
//       count++;
//     }
//     sum += arr[i];
//     i--;
//   }
//   return sum;
// }

int maxelementsum( vector<int>& arr, int k, int n){
  int i=0,j=0, maxSum=INT_MIN,sum=0,iWindows=0,iWindowsmin=0;

  while(j<n){
    // sum for cummulative sum
    sum+=arr[j];
    // if sub array length min
    if(j-i+1==k){
      maxSum=max(maxSum,sum);
    }
    // if sub array greater than min
    if(j-i+1>k){
      iWindows+=arr[i];
      i++;
      iWindowsmin=min(iWindowsmin,iWindows);
      maxSum=max(maxSum,sum-iWindowsmin);
    }
    j++;
  }
  return maxSum;
}

int main(){
  vector<int> arr = {1, 1, 1, 1, 1, 1};
  // vector<int> arr = {-4, -3, 1, -2};

  cout << maxelementsum(arr, 2, 6) << endl;

  return 0;
}