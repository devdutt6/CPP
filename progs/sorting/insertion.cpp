#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  for( int i=1;i<arr.size();i++ ){
    for( int j=0;j<i;j++ ){
      if(arr[i]>arr[j]){
        continue;
      }
      else if( arr[j]>=arr[i] ){
        swap(arr[i], arr[j]);
        continue;
      }
    }
  }

  for( auto i = arr.begin(); i<arr.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}