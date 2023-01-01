#include <bits/stdc++.h>
using namespace std;

// Q. Given an array and a number k, find the largest sum of the subarray containing at least k numbers. It may be assumed that the size of array is at-least k

// ? not solution
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

int maxelementsum( vector<int>& arr, int k ){

}

int main(){
  // vector<int> arr = {1, 1, 1, 1, 1, 1};
  vector<int> arr = {-4, -2, 1, -3};

  cout << maxelementsum(arr, 2) << endl;

  return 0;
}