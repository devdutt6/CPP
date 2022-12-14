#include <bits/stdc++.h>

using namespace std;

void bubble( vector<int> &arr, int count ){
  if( count == arr.size() ){
    return;
  }
  for(int i=1;i<arr.size()-count;i++){
    if(arr[i-1]>arr[i]){
      swap(arr[i-1], arr[i]);
    }
  }

  bubble(arr, count+1);
}

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  bubble( arr, 0 );

  for( auto i = arr.begin(); i<arr.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}