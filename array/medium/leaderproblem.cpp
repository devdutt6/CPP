#include <bits/stdc++.h>

using namespace std;

int main(){
  int a[] = { 100, 200, 1, 3, 2, 4 };
  int n = 6;

  vector<int> arr;
  int max = INT_MIN;
  for(int i=n-1;i>=0;i--){
    if( max <= a[i] ){
      arr.push_back(a[i]);
      max = a[i];
    }
  }

  reverse(arr.begin(), arr.end());

  for(int i: arr){
    cout << i << " ";
  }

  return 0;
}