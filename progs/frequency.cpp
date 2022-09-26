#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = { 12, 124, 546, 46, 234, 123, 12, 657, 47, 83, 89, 76, 421 };
  map<int, int> m;

  // vector<int> arr2(700, 0);
  for(auto i=arr.begin();i<arr.end();i++){
    // arr2[*i] += 1;
    if(m[*i] < 0){
      m[*i] = 1;
    }
    else{
      m[*i] += 1;
    }
  }

  cout << "enter: ";
  int number;
  cin >> number;
  cout<< "In given array " << number << " appeared " << m[number] << " times."<<endl;
  return 0;
}