#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// bool inmatrix(vector<vector<int>> arr, int l, int r, int K){
//   if(l<=r){
//     int mid = (l+r)/2;

//     int row = mid/arr.size();
//     int col = mid%arr.size();
//     if( arr[row][col] == K ){
//       return true;
//     }
//     else if( arr[row][col] < K ){
//       cout<< "low: " << mid+1 << " " << r << endl;
//       return inmatrix(arr, mid+1, r, K);
//     }
//     else{
//       cout<< "low: " << l << " " << mid-1;
//       return inmatrix(arr, l, mid-1, K);
//     }
//   }
//   return false;
// }
// bool inmatrix(vector<vector<int>> arr, int M, int N, int K){
//   int low = 0;
//   int high = (M*N) - 1;

//   while( low<= high ){
//     int mid = low + (high-low)/2;
//     int row = mid/arr[0].size();
//     int col = mid%arr[0].size();
//     if( arr[row][col] == K ){
//       return true;
//     }
//     else if( arr[row][col] < K){
//       low = mid+1;
//     }
//     else{
//       high = mid-1;
//     }
//   }
//   return false;
// }
bool inmatrix(vector<vector<int>> &arr, int target){
  int lo = 0;
  if(!arr.size()) return false;
  int hi = (arr.size() * arr[0].size()) - 1;

  while(lo <= hi) {
    int mid = (lo + (hi - lo) / 2);
    if(arr[mid/arr[0].size()][mid % arr[0].size()] == target) {
      return true;
    }
    if(arr[mid/arr[0].size()][mid % arr[0].size()] < target) {
      lo = mid + 1;
    }
    else {
      hi = mid - 1;
    }
  }
  return false;
}

int main() {
  vector<vector<int>> arr = {
    {10, 20, 30, 40},
    {15, 25, 35, 45},
    {27, 29, 37, 48},
    {32, 33, 39, 50},
  };

  cout << inmatrix(arr, 37);

  return 0;
}