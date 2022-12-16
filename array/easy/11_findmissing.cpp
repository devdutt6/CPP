#include <bits/stdc++.h>
using namespace std;

// Q. You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

pair<int, int> missing(vector<int>& arr){
  pair<int, int> p;
  int len = arr.size();
  // expected
  int sum = (len*(len+1))/2;
  int sumOfSquare = (len*(len+1)*(2*len+1))/6;

  for( auto i:arr ){
    sum -= i;
    sumOfSquare -= (i*i);
  }

  int missing = (sum + (sumOfSquare/sum))/2;

  cout << "a: " << missing << endl;
  cout << "b: " << sumOfSquare << endl;

  return p;
}

int main() {
  vector<int> arr = { 1, 2, 2, 4, 5, 6 };

  missing(arr);

  return 0;
}