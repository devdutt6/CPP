#include <bits/stdc++.h>
using namespace std;

// Q. Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

/**
 * @brief returns the row index containing max 1's in 2D vector.
 *
 * @param vector<vector<int>>
 * @return index
 */
int mostOnes(vector<vector<int>>& arr){
  int max = 0, maxIndex = 0, len = arr.size(), count = 0;
  for( int i=0;i<len;i++ ){
    int len2 = arr[i].size();
    for( int j=0;j<len2;j++ ){
      if( arr[i][j] == 1 ){
        count++;
      }
    }
    if( count > max ){
      max = count;
      maxIndex = i;
    }
    count = 0;
  }

  return maxIndex;
}

int main() {
  vector<vector<int>> arr = {
    {0, 0, 1, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 0},
    {1, 1, 1, 1}
  };

  cout << "maximum 1's are in row number: " << mostOnes(arr) + 1  << endl;

  return 0;
}