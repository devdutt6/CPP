#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> a  = {{1, 2, 3, 4},
                            {5, 6, 0, 7},
                            {8, 9, 4, 6},
                            {8, 4, 5, 2}};

  set<int> row;
  set<int> col;
  for(int i=0;i<a.size();i++){
    for(int j=0;j<a[0].size();j++){
      if(a[i][j] == 0){
        row.insert(i);
        col.insert(j);
      }
    }
  }

  for(int i=0;i<a.size();i++){
    for(int j=0;j<a[0].size();j++){
      if(row.count(i)){
        a[i][j] = 0;
      }
      else if(col.count(j)){
        a[i][j] = 0;
      }
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}