#include <bits/stdc++.h>
using namespace std;

// Q. Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.

/**
 * @brief returns the element that only occured once in vector
 *
 * @param vector<int> arr
 * @return int
 */
int once( vector<int> arr){
  int len = arr.size();
  for( int i=1;i<len;i+=2 ){
    if( arr[i-1] != arr[i]) return arr[i-1];
  }
  return arr[len-1];
}

int main() {
  vector<int> arr = {2, 2, 5, 5, 5, 5, 6};

  cout << "solo: "<< once(arr);

  return 0;
}