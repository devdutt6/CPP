#include <bits/stdc++.h>
using namespace std;

// Q. Given a binary array arr of size N find the maximum number of consecutive 1's.

/**
 * @brief it will return the maximum number of consecutive 1's
 *
 * @param vector<int> arr
 * @return int
 */
int maxConsecutive( vector<int>& arr ){
  int count = 0,max = 0, len = arr.size();
    for( auto i :arr ){
      if( i==1 ){
        count++;
        if( count > max ) max = count;
      }
      else{
        count = 0;
      }
    }

  return max;
}

int main() {
    vector<int> arr = { 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1 };

    cout << "maximum consecutive 1's are: " << maxConsecutive(arr) << endl;

    return 0;
}