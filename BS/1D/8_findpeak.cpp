#include <bits/stdc++.h>
using namespace std;

// Q. Given an array, find a peak element(print anyone, if many are found). A peak element is one such that it is either greater than or equal to its neighbours. For the first and last element, it is enough to look at its only one neighbour.

/**
 * @brief returns the index of peak element in array if found one
 *
 * @param vector<int>
 * @param int n
 * @return int
 */
int findpeak( vector<int>& arr, int n ){
  int start=0, end = n-1;

  while( start<end ){
    int mid = (start+end)/2;

    if( mid == 0 ){
      return arr[0] >= arr[1] ? 0 : 1;
    }
    if( mid == n-1 ){
      return arr[n-1] >= arr[n-2] ? n-1 : n-2;
    }

    if( arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1] ){
      return mid;
    }
    else if( arr[mid-1]>arr[mid] ){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }

  return start;
}

int main(){
  vector<int> arr = { 1, 2, 3 };

  cout << findpeak(arr, 3) << endl;

  return 0;
}
