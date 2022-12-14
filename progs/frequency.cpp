#include <bits/stdc++.h>

using namespace std;
// Q. find the frequency of given number in a array/vector.

int frequency(vector<int> vec, int n){
  map<int, int> m;

  for(auto i: vec){
    if(m[i]>0) m[i] += 1;
    else m[i] = 1;
  }

  return m[n];
}

int main() {
  vector<int> arr = { 12, 124, 546, 46, 234, 123, 46, 46, 12, 657, 47, 83, 89, 76, 421 };

  cout << "enter: ";
  int number;
  cin >> number;

  cout<< "In given array " << number << " appeared " << frequency(arr, number) << " times."<< endl;

  return 0;
}