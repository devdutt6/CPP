#include <bits/stdc++.h>
using namespace std;

// Q. Find the Nth root of a number using binary search

double multiply(double n, double number){
  double prod = 1.0;
  for( double i=1;i<=n;i++ ){
    prod *= number;
  }
  return prod;
}

double nthroot(double n, double target){
  double start = 1.0, end = target, eps = 1e-5;

  while( (end-start) > eps ){
    double mid = (start+end) / 2.0;
    if( multiply(n, mid) < target ) start = mid;
    else end = mid;
  }

  return start;
}

int main(){
  cout << nthroot(6, 4096) << endl; // 4

  return 0;
}