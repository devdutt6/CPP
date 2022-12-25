#include <bits/stdc++.h>
using namespace std;

// Q. A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

vector<int> findPeak(vector<vector<int>>& arr){
  int n = arr.size()-1;
  int m = arr[0].size()-1;
  int i = 0;
  int j = 0;
  vector<int> v;

  while( i>=0 && j>=0 && i<=n && j<=m ){
    // ? improved below conditions
    // int left, right, top, bottom;
    // if( j>0 && j<m ){
    //   left = arr[i][j-1] > 0 ? arr[i][j-1] : -1;
    //   right = arr[i][j+1] > 0 ? arr[i][j+1] : -1;
    // }
    // if( i>0 && i<n ){
    //   top = arr[i-1][j] > 0 ? arr[i-1][j] : -1;
    //   bottom = arr[i+1][j] > 0 ? arr[i+1][j] : -1;
    // }
    // if( j == 0 ){
    //   left = -1;
    //   right = arr[i][j+1] > 0 ? arr[i][j+1] : -1;
    // }
    // if( j == m ){
    //   top = arr[i][j-1] > 0 ? arr[i][j-1] : -1;
    //   right = -1;
    // }
    // if( i == 0 ){
    //   top = -1;
    //   bottom = arr[i+1][j] > 0 ? arr[i+1][j] : -1;
    // }
    // if( i == n ){
    //   top = arr[i-1][j] > 0 ? arr[i-1][j] : -1;
    //   bottom = -1;
    // }
    int left = j>0 ?  arr[i][j-1] : -1;
    int right = j<m ? arr[i][j+1] : -1;
    int top = i>0 ? arr[i-1][j] : -1;
    int bottom = i<n ? arr[i+1][j] : -1;

    int maxAmong = max(max(left, right), max(top, bottom));
    int temp = arr[i][j];
    if( temp > left && temp > right && temp > top && temp > bottom ){
      cout << "peak at i: " << i << " j: " << j << endl;
      v.emplace_back(i);
      v.emplace_back(j);
      return v;
    }
    else if( maxAmong == left ){
      cout << "moving left from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
      j--;
    }
    else if( maxAmong == right ){
      cout << "moving right from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
      j++;
    }
    else if( maxAmong == top ){
      cout << "moving top from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
      i--;
    }
    else if( maxAmong == bottom ){
      cout << "moving bottom from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
      i++;
    }
  }
  v.emplace_back(-1);
  v.emplace_back(-1);
  return v;
}

int main(){
  // vector<vector<int>> arr = {{1, 4},{3, 2}};
  vector<vector<int>> arr = {
    {1,2,3,4,5,6,7,8,9},
    {2,3,4,5,6,7,8,9,10},
    {3,4,5,6,7,8,9,10,11},
    {100,101,102,103,104,105,106,107,12},
    {5,6,7,8,9,10,11,108,11},
    {4,5,6,7,8,9,10,109,10},
    {3,4,5,6,7,8,9,110,9},
    {2,3,4,5,6,7,8,111,8},
    {1,2,3,4,5,6,7,112,7}
  };

  vector<int> v = findPeak(arr);

  for(auto i : v){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
 // cout << "peak at i: " << i << " j: " << j << endl;
// cout << "moving left from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
 // cout << "moving right from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
// cout << "moving top from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;
// cout << "moving bottom from i: " << i << " j: " << j << " "<<left<<right<<top<<bottom<< endl;