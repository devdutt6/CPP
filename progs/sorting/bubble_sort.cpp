#include <bits/stdc++.h>

using namespace std;

void bubble(vector<int>& arr){
  int len = arr.size();
  for(int i=0;i<len;i++){
    for( int j=1;j<len-i;j++ ){
      if( arr[j-1]>arr[j] ) swap(arr[j], arr[j-1]);
    }
  }
}

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  bubble(arr);

  for( auto i : arr ){
    cout << i << " ";
  }
    cout << endl;

  return 0;
}