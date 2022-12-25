#include <bits/stdc++.h>
using namespace std;

// Q. Find the square root of number.

/**
 * @brief it will find the floor perfsquare root of given number
 *
 * @param int target
 * @return int
 */
int root(int target){
  int start = 1, end = target;

  while( start<=end ){
    int mid = (start+end) >> 1;
    int sqr = mid*mid;
    if( sqr == target ) return mid;
    else if( sqr>target ) end = mid-1;
    else {
      start = mid+1;
    }
  }
  return start*start == target ? start : end;
}

/**
 * @brief lame solution worked on gfg tho XD.
 *
 * @param long long int target
 * @return int
 */
long long int lamesolution(long long int target){
  vector<int> arr;
  long long int sqr = 0, temp = 0;

  while( temp <= 1e7 ){
    temp = sqr*sqr;
    arr.emplace_back(temp);
    sqr++;
  }

  cout << arr.size() << endl;
  int start = 0, end = arr.size()-1;

  while( start<=end ){
    long long int mid = (start+end) >> 1;

    if( arr[mid] < target ) start = mid + 1;
    else end = mid - 1;
  }

  return arr[start] == target ? start : end;
}

int main(){
  vector<int> arr;
  long long int target = 10; // 3
  // long long int target = 4; // 2

  cout << lamesolution(target) << endl;
  // cout << root(target) << endl;

  return 0;
}