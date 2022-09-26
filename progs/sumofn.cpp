#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum( int n ){
  if( n==1 ){
    return n;
  }
  else{
    return n + sum(n-1);
  }
}

int main() {
  int n;
  cout << "enter: " ;
  cin >> n;

  int sumofn = sum(n);
  cout << "Sum of n is: " << sumofn << endl;
  return 0;
}