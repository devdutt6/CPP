#include<bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq; // it will be a max heap tree which will have maximum element at the top (lexical maximum)

  pq.push(1);
  pq.push(3);
  pq.push(8);
  pq.push(5);
  pq.emplace(4);

  cout << pq.top() << "\n"; // 8

  pq.pop(); // 8
  cout << pq.top() << "\n"; // 8

  // min heap tree
  priority_queue<int, vector<int>, greater<int>> mpq;
  mpq.push(1);
  mpq.push(3);
  mpq.push(8);
  mpq.push(5);
  mpq.emplace(4);

  cout << mpq.top() << "\n"; // 1

  mpq.pop(); // 1
  cout << mpq.top() << "\n"; // 3

  return 0;
}