#include <bits/stdc++.h>

using namespace std;
// Q. find the sum of natural numbers till a given number

int sum( int n ){
  if( n==1 ) return 1;
  else return n + sum(n-1);
}

int main() {
  int n;
  cout << "enter: " ;
  cin >> n;

  int sumofn = sum(n);
  cout << "Sum of n is: " << sumofn << endl;

  return 0;
}