#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<vector<int>> arr = {{1,2 ,3}, {4, 5, 6}, {7, 8, 9}}; // 1 2 3 6 9 8 7 4 5

  int left = 0;
  int right = 2;
  int top = 0;
  int bottom = 2;

  while(left <= right && top <= bottom ){
    for(int i=left;i<=right;i++){
      cout << arr[top][i] << " ";
    }
    top++;
    for(int i=top; i<=bottom;i++){
      cout << arr[i][right] << " ";
    }
    right--;
    for(int i=right; i>=left;i--){
      cout << arr[bottom][i] << " ";
    }
    bottom--;
    for(int i=bottom; i>=top;i--){
      cout << arr[i][left] << " ";
    }
    left++;
  }

  return 0;
}