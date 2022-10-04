#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[] = { 2, 0, 2, 1, 0, 1 };
  int i = 0;
  int j = 5;
  while( i<j ){
    while( a[i] == 0 ){
      i++;
    }
    while( a[j] > 0 ){
      j--;
    }
    if(i<j){
      swap(a[i], a[j]);
      i++;j--;
    }
  }
  int b = j+1;
  int c = 5;
  while( b<c ){
    while( a[b] == 1 ){
      b++;
    }
    while( a[c] == 2 ){
      c--;
    }
    if(b<c){
      swap(a[b], a[c]);
      b++;c--;
    }
  }

  for(auto i: a){
    cout << i << " ";
  }

  return 0;
}