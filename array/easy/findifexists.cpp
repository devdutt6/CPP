#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int arr[], int l, int r, int k){
  if( l<r ){
    int mid = (r+l)/2;
    if( k == arr[mid] ){
      return true;
    }
    else if( k>arr[mid] ){
      return check(arr, mid, r, k);
    }
    else if(k<arr[mid]){
      return check(arr, l, mid, k);
    }
    else{
      return false;
    }
  }
  return false;
}

int main() {
  int arr[] = {4 ,3, 2, 1};

  cout << check(arr, 0, 3, 1);

  return 0;
}