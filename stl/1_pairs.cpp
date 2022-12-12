#include<bits/stdc++.h>
using namespace std;

int main() {
  // Pair is a part of 'utility' lib.
  pair<int, char> P1; // Pair { 0, NULL }
  pair<char, int> P2('d', 2 ); // Pair { 'd', 2 }

  // make_pair is a function to create a pair
  pair<char, pair<int, int>> P3 = make_pair('a', make_pair(1, 2)); // { Pair { 'a', Pair { 1, 2 } } }
  pair<int, int> P4; // Pair { 0, NULL }
  pair<int, int> P5(2, 4); // Pair { 2, 4 }
  P4.first = 1;
  P4.second = 5;

  cout << P1.first; // auto initialized to 0 if not initialized manually.
  cout << "P4: " << P4.first << " " << P4.second << endl; // 1 5
  cout << "P5: " << P5.first << " " << P5.second << endl; // 2 4

  P4.swap(P5); // swaps the value of pairs if the datatypes are same
  cout << "P4: " << P4.first << " " << P4.second << endl; // 2 4
  cout << "P5: " << P5.first << " " << P5.second << endl; // 1 5

  char a;
  int b, c, d;
  tie(a, b) = P2; // ties values to defined variables
  cout << "a: " << a << " b: " << b << endl; // a: 'd' b: 2
  tie(c, d) = P3.second;
  cout << "c: " << c << " d: " << d << endl; // c: 1 d: 2

  // can also use as
  pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };
  return 0;
}