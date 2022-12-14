#include <bits/stdc++.h>

using namespace std;

void insertion(vector<int>& arr){
  int len = arr.size();
  for( int i=1;i<len;i++ ){
    for( int j=0;j<i;j++ ){
      if(arr[i]>arr[j]) continue;
      swap(arr[i], arr[j]);
    }
  }
}

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  insertion(arr);

  for( auto i : arr){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}