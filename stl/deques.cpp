#include<bits/stdc++.h>
using namespace std;

int main() {
  deque<int> ls;

  ls.push_back(1);
  ls.emplace_back(2);

  for( auto it : ls ){
    cout << it << " ";
  }
  cout << "\n";

  ls.push_front(0);
  ls.emplace_front(-1);
  for( auto it : ls ){
    cout << it << " ";
  }
  cout << "\n";

  ls.pop_back();
  ls.pop_front();
  for( auto it : ls ){
    cout << it << " ";
  }
  cout << "\n";
}