#include<bits/stdc++.h>
using namespace std;

int main() {
// 1. find the first occurance of X in a sorted array. if it does not exist then return -1
  int a[] = { 1, 4, 4, 4, 4, 9, 9, 10, 11 };
  int X = 9;

  // int ind = lower_bound(a, a+9, X) - a;

  // if( ind!= 9 && a[ind] == X ) cout << ind <<endl;
  // else cout << -1 << endl;

// 2. find the last occurance of an given element and print -1 if do not exist
  // int ind = upper_bound(a, a+9, X) - a;
  // ind--;
  // if( ind >=0 && ind != 9 && a[ind] == X ) cout << ind << endl;
  // else cout << -1 << endl;

// 3. find the largest number smaller than X in sorted array if not tehn -1
  // int ind = lower_bound(a, a+9, X) - a;
  // ind--;
  // if(ind >= 0) cout << a[ind] << endl;
  // else cout << -1 << endl;

// 4. find the smallest number greater than X if non then -1
  // int ind = upper_bound(a, a+9, X) - a;

  // if(ind < 9) cout <<  a[ind] << endl;
  // else cout << -1 << endl;

  return 0;
}