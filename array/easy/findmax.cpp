#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int largest(vector<int> &arr, int n)
{
  int max = INT_MIN;
  for(auto i=arr.begin();i<arr.end();i++){
    if( *i>max ){
      max = *i;
    }
  }
  return max;
}
int main() {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  cout << "largest is " << largest(arr, 9);

  return 0;
}