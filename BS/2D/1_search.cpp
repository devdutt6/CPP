#include <bits/stdc++.h>
using namespace std;

// Q. Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.

/**
 * @brief it will return the index of element if found in matrix else -1 the matrix's last element in first column is less than first element in next row
 *
 * @param vector<vector<int>> arr
 * @return int index
 */
pair<int, int> searchLeet(vector<vector<int>>& arr, int target){
  int n = arr.size();
  int m = arr[0].size();
  int start = 0;
  int end = (m*n)-1;
  pair<int, int> p;

  while( start <= end ){
    int mid = (start+end) >> 1;
    int temp = arr[mid/m][mid%m];
    if(  temp == target ){
      p.first = mid/m;
      p.second = mid%m;
      return p;
    }
    else if( temp < target ){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  }
  p = { -1, -1 };
  return p;
}

/**
 * @brief it will return the index of element if found in matrix else -1 the matrix's last elements are row wise and column wise sorted
 *
 * @param vector<vector<int>> arr
 * @return int index
 */
pair<int, int> searchGFG(vector<vector<int>>& arr, int target){
  int n = arr.size()-1;
  int m = arr[0].size()-1;
  int i=0, j=m;
  pair<int, int> p;

  while(i>=0 && j >= 0 && i<=n && j <= m){
    if( arr[i][j] == target ){
      p = { i, j };
      return p;
    }
    else if(arr[i][j] > target){
      j--;
    }
    else{
      i++;
    }
  }
  p = { -1, -1 };
  return p;
}

int main(){
  vector<vector<int>> arr = {
    {3 ,30, 38},
    {44, 52, 54},
    {57, 60, 69}
  };
  int target = 60;
  // pair<int, int> p = searchLeet(arr, target);
  pair<int, int> p = searchGFG(arr, target);
  cout << p.first << " " << p.second << endl; // -1 -1

  return 0;
}