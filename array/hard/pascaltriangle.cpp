#include <bits/stdc++.h>

using namespace std;


// my approach
int main(){
  vector<int> a(10, 1);
  vector<int> b(10, 1);

  int row = 1 ;
  int n = 4;

  while(row<n){
    for( int j=0;j<row;j++ ){
      if( j == 0 || j == row-1 ){
        b[j] = 1;
      }else{
        b[j] = a[j] + a[j-1];
      }
      cout << b[j] << " ";
    }
    cout << endl;
    for( int j=0;j<row;j++ ){
      a[j] = b[j];
    }
    row++;
  }

  return 0;
}

// strivers
int main(){
  vector<vector<int>> a(4);

  for(int i=0;i<4;i++){
    a[i].resize(i+1);
    a[i][0] = a[i][i] = 1;

    cout << a[i][0] << " ";
    for(int j=1;j<i;j++){
      a[i][j] = a[i-1][j] + a[i-1][j-1];
      cout << a[i][j] << " ";
    }
    if( i != 0){
      cout << a[i][i] << " ";
    }
    cout << endl;
  }
  return 0;
}
