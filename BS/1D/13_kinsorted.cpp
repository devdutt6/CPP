#include <bits/stdc++.h>
using namespace std;

// Q. Given two sorted arrays of size m and n respectively, you are tasked with finding the element that would be at the kth position of the final sorted array.

/**
 * @brief it will find the elements value at index after merginf two sorted array in one
 *
 * @param vector<int> arr
 * @param vector<int> arr2
 * @param int m
 * @param int n
 * @param int k
 * @return int value
 */
int atk(vector<int>& arr, vector<int>& arr2, int m, int n, int k){
  if( m>n ){
    return atk(arr2, arr, n, m, k);
  }

  int start = max(0, k-n);
  int end = min(k, m);

  while( start<=end ){
    int cut1 = (start+end) >> 1;
    int cut2 = k-cut1;
    int l1 = cut1 == 0 ? INT_MIN : arr[cut1-1];
    int l2 = cut2 == 0 ? INT_MIN : arr2[cut2-1];
    int r1 = cut1 == m ? INT_MAX : arr[cut1];
    int r2 = cut2 == n ? INT_MAX : arr2[cut2];

    if( l1 <= r2 && l2 <= r1 ){
      return max(l1, l2);
    }
    else if( l1 > r2 ){
      end = cut1-1;
    }
    else{
      start = cut1+1;
    }
  }
  return 1;

}

int main(){
  vector<int> arr = {1, 10, 10, 25, 40, 54, 79};
  vector<int> arr2 = {15, 24, 27, 32, 33, 39, 48, 68, 82, 88, 90};

  cout << atk(arr, arr2, 7, 11, 15) << endl; // 6

  return 0;
}