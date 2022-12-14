#include <bits/stdc++.h>

using namespace std;
// Q. Check if given string is palindrom or not

bool pali(string arr, int i, int j ) {
  if( j<=i ){
    return true;
  }
  if( arr[i] == arr[j] ) return pali(arr, i+1, j-1);
}

int main() {
  string stri = "deved";
  // string stri = "deveda";
  bool check = pali(stri, 0, stri.length()-1);

  cout << "String is palindrom: " << check << endl;
  return 0;
}