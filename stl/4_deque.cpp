#include<bits/stdc++.h>
using namespace std;

int main() {
  // dequeue is a container. Unlike vectors, contiguous storage allocation may not be guaranteed
  // but it is more efficient in iteration and deletion
  // other wise all the functions are same as list and vector
  deque<int> ls;

  ls.push_back(1);
  ls.emplace_back(2); // { 1, 2 }

  for( auto it : ls ){
    cout << it << " "; // 1 2
  }
  cout << endl;

  ls.push_front(0); // { 0, 1, 2 }
  ls.emplace_front(-1); // { -1, 0, 1, 2 }
  for( auto it : ls ){
    cout << it << " "; // -1 0 1 2
  }
  cout << endl;

  ls.pop_back(); // { -1, 0, 1 }
  ls.pop_front();// { 0, 1 }
  for( auto it : ls ){
    cout << it << " "; // 0 1
  }
  cout << endl;
}