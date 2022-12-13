#include<bits/stdc++.h>
using namespace std;

int main() {
  // map stores using key value pair and it sorts the list according to lexical size of key
  map<int , int> m;

  map<int, pair<int, int>> mpp;
  map<pair<int, int>, int> mpp2;

  m[1] = 1;
  m.insert({ 2, 2 });
  // m.insert({ 3, 2 });
  m.emplace(3, 3);

  mpp[2] = {2, 3};

  mpp2[{ 1, 1 }] = 2;
  cout << m[1] << endl;
  cout << m[2] << endl;

  for (auto it : m){
    cout << it.first << " " << it.second << endl;
  }

  // here iterator returns the pair which has two properties first and second
  map<int, int>::iterator it = m.find(3); // { 3, 2 }
  auto it2 = m.find(2); // { 3, 2 }
  cout << it->first << " " << it->second << endl;// 3 2
  cout << it2->first << " " << it2->second << endl; // 2 2

  m.erase(1); // remove the key value whose key is 1;
  m.erase( m.begin() ,m.find(1)); // remove all the key value pairs till we find key 1;

  // auto lb = m.lower_bound(2);
  // auto lb = m.upper_bound(6);
  return 0;
}