#include<bits/stdc++.h>
using namespace std;

int main() {
  map<int , int> m; // map stores using key value pair and it sorts the list according to lexical size of key

  map<int, pair<int, int>> mpp;
  map<pair<int, int>, int> mpp2;

  m[1] = 1;
  m.insert({ 2, 2 });
  m.emplace(3, 2);

  mpp[2] = {2, 3};

  mpp2[{ 1, 1 }] = 2;
  cout << m[1] << "\n";
  cout << m[2] << "\n";

  for (auto it : m){
    cout << it.first << " " << it.second << "\n";
  }

  auto it = m.find(3);
  // cout << *(it).second << endl;

  // auto lb = m.lower_bound(2);
  // auto lb = m.upper_bound(6);
  return 0;
}