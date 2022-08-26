#include<bits/stdc++.h>
using namespace std;

int main() {
  set<int> s; // sorts everything in order and unique

  s.insert(1);
  s.insert(2);
  s.insert(1);
  s.emplace(3); // { 3, 2, 1 }

  auto it = s.find(3); // will return the iterator to the value
  auto it2 = s.find(6); // will return the iterator end the pointer after the end value

  s.count(1); // will return count ov value ein set which will be alwaays unique so 1 or 0 if not

  s.erase(2); // erase by value or pointer
  s.erase(it); // erase by value or pointer
  s.erase(s.find(2), s.find(6)); // erase by value or pointer lower bound will be exclusive

// syntax pending
  auto lb = s.lower_bound(2);
  auto ub = s.upper_bound(6);

  return 0;
}