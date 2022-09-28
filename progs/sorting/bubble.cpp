#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  for(int i=0;i<arr.size();i++){
    for( int j=1;j<arr.size()-i;j++ ){
      if( arr[j-1]>arr[j] ){
        swap(arr[j], arr[j-1]);
      }
    }
  }

  for( auto i = arr.begin(); i<arr.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}