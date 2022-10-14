#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> a = {{1, 2, 3, 4 }, { 5, 6, 7, 8}, { 9, 10, 11, 12}};
  int n = 3;
  int m = 4;
  vector<vector<int>> b = {{1, 2, 3 }, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

// ?brute
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<m;j++){
  //     b[i][j] = a[n-1-j][i];
  //   }
  // }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<m;j++){
  //     cout << b[i][j] << " ";
  //   }
  //   cout << endl;
  // }

// ?optimized
  for(int i=0;i<a.size();i++){
    for(int j=0;j<a[0].size();j++){
      swap(a[i][j], a[j][i]);
    }
  }

  for(int i=0;i<a.size();i++){
    reverse(a[i].begin(), a[i].end());
  }

  return 0;
}