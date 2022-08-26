#include<bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;

  q.push(1);
  q.push(3);
  q.push(2);
  q.push(5);
  q.emplace(5);

  cout << q.back()<< "\n";

  q.back() += 5;

  q.pop();

  cout << q.front()<< "\n";

  return 0;
}