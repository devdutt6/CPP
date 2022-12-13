#include<bits/stdc++.h>
using namespace std;

int main() {
  // Queue follows FIFO
  queue<int> q;

  q.push(1);
  q.push(3);
  q.push(2);
  q.push(5); // push on back
  q.emplace(5); // { 1, 3, 2, 5, 5 }

  cout << q.back()<< endl; // 5
  cout << q.front()<< endl; // 1

  q.back() += 5; // { 1, 3, 2, 5, 10 }

  q.pop(); // 1 popped from front

  cout << q.front()<< endl; // 3

  return 0;
}