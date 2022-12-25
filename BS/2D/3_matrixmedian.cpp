#include <bits/stdc++.h>
using namespace std;

// Q. Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.

// if array in matrix are sorted such that last element in one row is less than first element in next row.
int medianLeet(vector<vector<int>>& arr){
  int n = arr.size();
  int m = arr[0].size();
  int start = 0;
  int end = (n*m)-1;
  int mid = (start+end) >> 1;

  return arr[mid/m][mid%m];
}

// upper bound function to return the number of element less than or equal to given target value
int upperBound(vector<int>& arr, int target){
  int start = 0, end = arr.size()-1;

  while( start<=end ){
    int mid = (start+end) >> 1;

    if( arr[mid] <= target ) start = mid+1;
    else end = mid-1;
  }

  return start;
}

// if matrix is row wise sorted
int median(vector<vector<int>>& arr){
  int n = arr.size(), m = arr[0].size(), totalhalf = m*n >> 1;
  int low = 1, high = 2000;

  while( low<=high ){
    int mid = (low+high) >> 1, sum = 0;

    for( int i=0;i<n;i++ ){
      sum += upperBound(arr[i],  mid);
    }

    if( sum <= totalhalf ) low = mid + 1;
    else high = mid - 1;
  }

  return low;
}


int main(){
  vector<vector<int>> arr = {
    {1, 3, 6},
    {2, 6, 9},
    {3, 6, 9}
  };

  cout << median(arr) << endl;

  return 0;
}