#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = { 12, 124, 546, 46, 234, 123, 12, 657, 47, 83, 89, 76, 421,657 };
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
    int min = 1;
    int minNumber = 0;
    int maxNumber = 0;
    int max = 0;
  for(auto i: m){
    // cout << i.first << "-" << i.second << endl;
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