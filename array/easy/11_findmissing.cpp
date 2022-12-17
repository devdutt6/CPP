#include <bits/stdc++.h>
using namespace std;

// Q. You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

/**
 * @brief this returns the pair which first element is missing and other is repeating using math
 *
 * @param vector<int> arr
 * @return pair<int, int>
 */
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

  p.first = (sum + (sumOfSquare/sum))/2;
  p.second = p.first - sum;

  return p;
}

/**
 * @brief this returns the pair which first element is missing and other is repeating using simple parsing
 *
 * @param vector<int> arr
 * @return pair<int, int>
 */
pair<int, int> missingParse( vector<int>& arr ){
  pair<int, int> p;
  int len = arr.size();

  for(int i=1;i<len;i++){
    if( i == len-1 && p.first == 0 ){
      p.first = arr[i] + 1;
    }
    if( arr[i] - arr[i-1] == 0 ){
      p.second = arr[i];
    }
    else if( arr[i] - arr[i-1] > 1 ){
      p.first = arr[i] - 1;
    }
  }

  return p;
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 4, 5 };

  // pair<int, int> p = missing(arr);
  pair<int, int> p = missingParse(arr);

  cout << "missing: " << p.first << endl;
  cout << "repeating: " << p.second << endl;

  return 0;
}