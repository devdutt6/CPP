#include<bits/stdc++.h>
using namespace std;

int main() {
  //stores sorted but not unique
  multiset<int> ms;

  ms.insert(1);
  ms.insert(2);
  ms.insert(1);
  ms.emplace(3);// { 3, 2, 1, 1 }

  cout << ms.count(1) << endl; // 2

  ms.erase(1); // will remove all the occurance of one

  ms.find(1); // will return two iterators one start and second after the end so it can be used in erase

  ms.erase(ms.find(1)); // will remove all 1 from sets

  ms.count(1); // will actually return the count

  ms.erase(ms.begin()); // we can actually remove one element by passing iterator
  return 0;
}