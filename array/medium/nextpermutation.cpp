#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> arr = { 4, 3, 2, 1 };

  // int n = 3;
  // int i = n;
  // int flag;
  // while(i>=1){
  //   if(arr[i-1] < arr[i]){
  //     flag = i-1;
  //     break;
  //   }
  //   i--;
  // }
  // if( i<=0 ){
  //   reverse(arr, arr+sizeof(arr) / sizeof(arr[0]));
  // }
  // else{
  //   int k = n;
  //   while( arr[flag] > arr[k] ){
  //     k--;
  //   }
  //   swap(arr[k], arr[flag]);
  // }
  // for(auto j : arr){
  //   cout << j << " ";
  // }
  int N = 5;
  int i = N-1;
  int flag;
  while(i>=1){
    if(arr[i-1] < arr[i]){
      flag = i-1;
      break;
    }
    i--;
  }
  if( i<=0 ){
    reverse(arr.begin(), arr.end());
  }
  else{
    int k = N-1;
    while( arr[flag] >= arr[k] ){
      k--;
    }
    swap(arr[k], arr[flag]);
  }

  for(auto j : arr){
    cout << j << " ";
  }

  return 0;
}
