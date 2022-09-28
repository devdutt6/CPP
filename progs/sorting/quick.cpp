#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition( vector<int> &arr, int l, int r ){
  int pi = arr[r];

  int i=l-1;

  for( int j=l;j<r;j++ ){
    if(arr[j]<pi){
      i++;
      swap( arr[i], arr[j]);
    }
  }
  swap( arr[i+1], arr[r] );
  return i+1;
}

void quick( vector<int> &arr, int l, int r ){
  if( l<r ){

    int pi = partition(arr, l, r);

    quick( arr, l, pi-1 );
    quick( arr, pi+1, r );
  }
  return;
}

int main() {
  vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

  quick(arr, 0, 7);

  for( auto i = arr.begin(); i<arr.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}