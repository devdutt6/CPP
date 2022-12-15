#include <bits/stdc++.h>
using namespace std;

// Q.  Given an array of integers, rotating array of elements by k elements either left or right.

/**
 * @brief it left shiefts the vector n times
 *
 * @param vector<int> arr
 * @param int count
 */
void leftShieftK( vector<int>& arr, int count ){
  int len = arr.size();
  if( count%len == 0 ) return;

  if( count > len ) count %= len;
  reverse( arr.begin(), arr.begin()+count );
  reverse( arr.begin()+count, arr.end() );
  reverse( arr.begin(), arr.end() );

  return;
}
/**
 * @brief it right shiefts the vector n times
 *
 * @param vector<int>
 * @param int count
 */
void rightShieftK( vector<int>& arr, int count ){
  int len = arr.size();
  if( count%len == 0 ) return;

  if( count > len ) count %= len;
  reverse(arr.end()-count, arr.end());
  reverse(arr.begin(), arr.end()-count);
  reverse(arr.begin(), arr.end());
  return;
}


int main(){
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int count = 3;
  string dir = "right";

  if(dir == "left") leftShieftK(arr, count);
  else rightShieftK(arr, count);

  for( auto i: arr){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}

