#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fact( int n ){
  if( n==1 ){
    return n;
  }
  else{
    return n * fact(n-1);
  }
}

int main() {
  int n;
  cout << "enter: " ;
  cin >> n;

  int factofn = fact(n);
  cout << "Factorial of n is: " << factofn << endl;
  return 0;
}