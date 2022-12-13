#include<bits/stdc++.h>
using namespace std;

int main() {
  // stack is a LIFO type DS so the last element which was pushed will be at the top and only actions are push, pop and top.
  stack<int> st;

  st.push(1);
  st.push(5);
  st.push(2);
  st.push(2);
  st.push(4);

  cout << "top: " << st.top() << endl; // 4
  cout << "is empty: " << st.empty() << endl; // false

  st.pop(); // 4 is popped
  cout << "size of stack: " << st.size() << endl; // 4

  // swap is a function for a stack too

  return 0;
}