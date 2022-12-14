#include <bits/stdc++.h>

using namespace std;
// Q: find the factorial of given number using recursion

// fact function for finding factorial using recursion
int fact( int n ){
  if( n==1 ) return 1;
  // else
  return n * fact(n-1);
}

int main() {
  int n;
  cout << "enter: " ;
  cin >> n;

  cout << "Factorial of " << n <<" is: " << fact(n) << endl;
  return 0;
}