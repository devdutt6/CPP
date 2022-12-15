#include <bits/stdc++.h>
using namespace std;

// Q. find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

/**
 * @brief second minmax returns the pair of second minimum and maximum elements from vector.
 *
 * @param vector<int>
 * @return pair<int, int> => pair.first (second minimum), pair.second (second maximum)
 */
pair<int, int> second_minmax(vector<int>& arr){
  pair<int, int> p;

  sort(arr.begin(), arr.end());
  int len = arr.size();
  if(len == 0) throw "Pass vector with atleast one element";
  else if( len >= 2){
    p = { arr[1], arr[len-2] };
  }
  else{
    p = { arr[0], arr[0] };
  }

  return p;
}
int main() {
  vector<int> arr = { 1 };
  // vector<int> arr = { 1, 2 };
  // vector<int> arr = { 1, 2, 7, 7, 5, 8 };
  pair<int, int> p = second_minmax(arr);

  cout << "second smallest is: " << p.first << endl;
  cout << "second maximum is: " << p.second << endl;

  return 0;
}