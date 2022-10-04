#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void missing(int arr[], int n){
  int repeat;
  int sum = arr[0];
  int o_sum = (n * (n+1))/2;
  for(int i=1;i<n;i++){
    if( arr[i-1] == arr[i] ){
      repeat = arr[i];
    }
    sum += arr[i];
  }
  if(repeat<0){
    cout << "perf";
    return;
  }

  int missing = o_sum - (sum - repeat);
  cout << "repeat: " << repeat << endl<<"missing: "<< missing;
  return;
}

int main() {
  int arr[] = { 1, 2, 3, 3, 5, 6 };

  missing(arr, 6);

  return 0;
}