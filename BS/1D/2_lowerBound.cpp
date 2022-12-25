#include <bits/stdc++.h>
using namespace std;

// Q. Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).

/**
 * @brief returns the index of maximum number strictly less than target number.
 *
 * @param vector<int>
 * @param int target
 * @return int index
 */
int findFloorStrict(vector<int>& arr, int target){
  int i=0, j = arr.size()-1, lowerBound = -1;

  if( arr[0] > target ){
    return -1;
  }

  while( i <= j ){
    if( i == j ){
      if( arr[i] < target ){
        return i;
      }
      else{
        i--;
        return i;
      }
    }
    int mid = (i+j)/2;

    if( arr[mid] == target ){
      cout<< "equal" << endl;
      lowerBound = mid;
      while(arr[lowerBound] == arr[mid] && mid > 0){
        mid--;
      }
      return mid;
    }
    else if( arr[mid] < target){
      cout<< "target greater" << endl;
      i = mid+1;
    }
    else{
      cout<< "target smaller" << endl;
      j = mid-1;
    }
  }

  return lowerBound;
}

/**
 * @brief returns the index of maximum number less or equal than target number.
 *
 * @param vector<int>
 * @param int target
 * @return int index
 */
int findFloor( vector<int>& arr, int target ){
  int start = 0, end = arr.size()-1;

  if( arr[0] > target ) return -1;

  while(start<=end){
    int mid = (start+end) >> 1;

    if( arr[mid] < target ) start = mid + 1;
    else end = mid - 1;
  }

  return arr[start] == target ? arr[start] : arr[end];
}
// ? right but code is confusive
// int findFloor(vector<int>& arr, int target){
//   int i=0, j = arr.size()-1;
//   if( arr[0] > target ){
//     return -1;
//   }
//   while( i <= j ){
//     if( i == j ){
//       return i;
//     }
//     int mid = (i+j)/2;
//     if( arr[mid] == target ){
//       return mid;
//     }
//     else if( arr[mid] < target){
//       i = mid+1;
//     }
//     else{
//       j = mid-1;
//     }
//   }
//   return -1;
// }

// ? first attempt
// int findFloor(vector<int>& arr, int target, int start, int end){
//   int i=0, j = arr.size()-1, lowerBound = -1;
//   if( start>end ){
//     return -1;
//   }
//   int mid = (start+end)/2;
//   if( arr[mid] == target){
//     lowerBound = mid;
//     while(arr[lowerBound] == arr[mid] && mid > 0){
//       mid--;
//     }
//     if( mid == 0 && arr[lowerBound] == arr[mid] ){
//       return -1;
//     }
//     else{
//       lowerBound = mid;
//       return lowerBound;
//     }
//   }
//   else if( arr[mid] > target ){
//     j = mid-1;
//   }
//   else{
//     i = mid +1;
//   }
// }

int main(){
  vector<int> arr = {52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146};
  int target = 106;

  cout << findFloor(arr, target) << endl; // 106
  // cout << findFloorStrict(arr, target) << endl; // 105

  return 0;
}