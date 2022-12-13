#include<bits/stdc++.h>
using namespace std;

int main() {
  // It will be a max heap tree which will have maximum element at the top (lexical maximum)
  // internally queue will store element in a tree DS so insertion and deletiona have TC of log(n)
  priority_queue<int> pq;

  pq.push(1); // 1
  pq.push(3); // 1 3
  pq.push(8); // 1 3 8
  pq.push(5); // 1 3 5 8
  pq.emplace(4); // 1 3 5 4 8

  cout << pq.top() << endl; // 8

  pq.pop(); // 8
  cout << pq.top() << endl; // 5

  // min heap tree this will reverse the priority and will store lexical least minimum by size at top
  priority_queue<int, vector<int>, greater<int>> mpq;
  mpq.push(1); // 1
  mpq.push(3); // 3 1
  mpq.push(8); // 3 8 1
  mpq.push(5); // 3 8 5 1
  mpq.emplace(4); // 4 3 8 5 1

  cout << mpq.top() << endl; // 1

  mpq.pop(); // 1
  cout << mpq.top() << endl; // 3

  return 0;
}