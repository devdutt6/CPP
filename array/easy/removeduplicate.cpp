#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int remove_duplicate(int a[],int n){
  int count = 1;
  int i = 1;
  int last_ele = a[0];
  while( i<n ){
    if( last_ele != a[i] ){
      a[count] = a[i];
      last_ele = a[i];
      count++;
    }
    i++;
  }
  return count;
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  int n = remove_duplicate(arr, 9);

  for( int i=0;i<n;i++ ){
    cout << arr[i] << " ";
  }

  return 0;
}