#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> merge( vector<int> arr, vector<int> arr1 ){
  vector<int> arr3((arr.size()+arr1.size()), 0);
  int i=0;
  int j=0;
  int count = 0;
  while( arr[i]>0 && arr1[j]>0 ){
    if( arr[i]<arr1[j] ){
      arr3[count] = arr[i];
      i++;
      count++;
    }
    else{
      arr3[count] = arr1[j];
      j++;
      count++;
    }
  }

  while( arr[i] > 0 ){
    arr3[count] = arr[i];
    count++;
    i++;
  }
  while( arr1[j] > 0 ){
    arr3[count] = arr1[j];
    count++;
    j++;
  }

  return arr3;
}

int main() {
  vector<int> arr = { 1, 4, 5, 9 };
  vector<int> arr1 = { 2, 3, 5, 8 };

  vector<int> arr3 = merge(arr, arr1);

  for( auto i = arr3.begin(); i<arr3.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}