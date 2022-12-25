#include <bits/stdc++.h>
using namespace std;

// Q. Impliment Upper Bound

/**
 * @brief it returns the minimum element greater than specified
 *
 * @param vector<int>
 * @param int target
 * @return int index
 */
int upperBound( vector<int>& arr, int target ){
  int start = 0, end = arr.size()-1;

  if( arr[end] < target ) return -1;

  while(start<=end){
    int mid = (start+end) >> 1;

    if( arr[mid] <= target ) start = mid+1;
    else end = mid-1;
  }
  return arr[start] > 0 ? arr[start] : -1;
}

// int upperBound(vector<int>& arr, int target){
//   int i = 0, j = arr.size() - 1;
//   if( arr[j]<target ){
//     return -1;
//   }
//   while( i<= j){
//     if( i == j ){
//       if( arr[i]<=target && i<arr.size() - 1 ){
//         i++;
//         return i;
//       }
//       else{
//         return i;
//       }
//     }
//     int mid = (i+j)/2;
//     if( arr[mid] == target ){
//       int upper = mid + 1;
//       while( arr[mid] == arr[upper] && upper<arr.size()-1 ){
//         upper++;
//       }
//       return upper;
//     }
//     else if( arr[mid] < target ){
//       i = mid+1;
//     }
//     else{
//       j = mid-1;
//     }
//   }
//   return -1;
// }

int main(){
  vector<int> arr = {1, 2, 8, 10, 11, 12};

  cout << upperBound(arr, 13) << endl; // 10

  return 0;
}