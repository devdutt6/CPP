#include <bits/stdc++.h>

using namespace std;

void insertion( vector<int> &arr, int limit){
  if(limit == arr.size()) return;

  for( int i=0;i<limit;i++ ){
    if( arr[limit]>arr[i] ) continue;
    swap(arr[i], arr[limit]);
  }

  insertion( arr, limit+1 );
}

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  insertion(arr, 0);

  for( auto i : arr ){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}