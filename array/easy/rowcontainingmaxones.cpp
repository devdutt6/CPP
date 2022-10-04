#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> arr = {
    {0, 0, 1, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 0},
    {1, 1, 1, 1}
  };
  int max = 0;
  int maxi = -1;
  for(int i=0;i<arr.size();i++){
    int count = 0;
    for(int j=0;j<arr[0].size();j++){
      if( arr[i][j] == 1 ){
          count++;
      }
    }
    if( max<count ){
      max = count;
      maxi = i;
    }
  }
  cout << maxi;

  return 0;
}