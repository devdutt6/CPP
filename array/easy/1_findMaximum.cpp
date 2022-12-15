#include <bits/stdc++.h>
using namespace std;

// Q. find the largest element in the array.
/**
 * @brief returns the maximum valued element from vector.
 *
 * @param vector<int>
 * @return int
 */
int largest(vector<int> &arr)
{
  int max = INT_MIN;
  for( auto value : arr ){
    if( value > max ) max = value;
  }

  return max;
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  cout << "largest is " << largest(arr) << endl;

  return 0;
}