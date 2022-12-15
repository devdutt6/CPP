#include <bits/stdc++.h>
using namespace std;

// Q. check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

/**
 * @brief return true if the passed vector is sorted else false
 *
 * @param vector<int>
 * @return boolean
 */
bool issorted(vector<int> arr) {
  if(arr.size() < 1) return true;
  else{
    for( auto i=arr.begin()+1;i<arr.end();i++ ){
      if( *(i-1) > *i ) return false;
    }
    return true;
  }
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  cout << "Is array sorted: ";
  if(issorted(arr)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}