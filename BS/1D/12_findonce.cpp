#include <bits/stdc++.h>
using namespace std;

// Q. find the element in array which only occured once in rotated sorted array.

/**
 * @brief find the element occuring once in sorted array
 *
 * @param vector<int>
 * @return int solo
 */
int findonce(vector<int>& arr){
  int start = 0, end = arr.size()-1;

  while( start<=end ){
    int mid = (start+end) >> 1;
    if( arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1] ){
      return arr[mid];
    }
    int left, right;
    if( arr[mid] == arr[mid-1] ){
      left = mid-1;
      right = mid;
    }
    else{
      left = mid;
      right = mid+1;
    }

    if( (left-start)%2 == 0 ){
      start = right+1;
    }
    else{
      end = left-1;
    }
  }

  return -1;
}

int main(){
  vector<int> arr = { -96, -96, -93, -93, -80, -80, -77, -77, -56, -56, -43, -43, -30, -30, -29, -29, -14, -14, -10, -10, 8, 8, 29, 29, 30, 30, 38, 44, 44, 46, 46, 79, 79, 87, 87, 88, 88, 94, 94 };

  cout << findonce(arr) << endl; // 0

  return 0;
}