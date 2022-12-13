#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[] = { 2, 8, 8, 8, 8, 18, 18, 20, 22 };

  //? 1.Find the first occurance of X in sorted array.
  // int find = 8;
  // int position = lower_bound(a, a+9, find) - a;
  // if(position < 9 && a[position] == find){
  //   cout << "found at index " << position << endl; // 1
  // }
  // else{
  //   cout << "NOF" << endl;
  // }

  //? 2.Find the last occurance of X in sorted array.
  // int find = 8;
  // int position = upper_bound(a, a+9, find) - a;
  // if(position >= 0 && a[position-1] == find){
  //   cout << "found at index " << position - 1 << endl; // 4
  // }
  // else{
  //   cout << "NOF" << endl;
  // }

  //? 3.Find the largest Number smaller than X in sorted array.
  // int find = 19;
  // int position = lower_bound(a, a+9, find) - a;
  // position--;
  // if(position < 9 && position >= 0){
  //   cout << "found at index " << position << endl; // 6
  // }
  // else{
  //   cout << "NOF" << endl;
  // }

  //? 4.Find the smallest Number greater than X in sorted array.
  int find = 19;
  int position = upper_bound(a, a+9, find) - a;

  if(position < 9){
    cout << "found at index " << position << endl; // 7
  }
  else{
    cout << "NOF" << endl;
  }

  return 0;
}