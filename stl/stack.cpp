#include<bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;

  st.push(1);
  st.push(5);
  st.push(2);
  st.push(2);
  st.push(4);
  st.emplace(4);

  cout << st.top() << "\n";
  cout << st.empty() << "\n";
  st.pop();
  cout << st.size() << "\n";

  stack<int> st1, st2;
  st1.swap(st2);

  return 0;
}