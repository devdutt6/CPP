#include <bits/stdc++.h>

using namespace std;
// Q. Find the numbers having max and min frequecy in a given vector.

map<int, int> frequency(vector<int> vec){
  map<int, int> m;

  for(auto i: vec){
    if(m[i]>0) m[i] += 1;
    else m[i] = 1;
  }

  return m;
}

int main() {
  vector<int> arr = { 12, 124, 546, 46, 234, 123, 46, 46, 12, 657, 47, 83, 89, 76, 421 };

  int min = 1;
  int max = 0;
  int minNumber = 0;
  int maxNumber = 0;

  for(auto i: frequency(arr)){
    if(i.second <= min){
      min = i.second;
      minNumber = i.first;
    }
    if( i.second > max ){
      max = i.second;
      maxNumber = i.first;
    }
  }

  cout << "min frequncy is of number " << minNumber << " which is "<<min<< endl;
  cout << "max frequncy is of number " << maxNumber << " which is "<<max << endl;

  return 0;
}