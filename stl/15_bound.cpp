#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[] = { 1, 2, 3, 4, 6 };

  auto i = lower_bound(a, a+5, 4); // if not exists then will point to the immidiate greater number than specified and it will return its address
  cout << i << endl; // 3

  int i = lower_bound(a, a+5, 4) - a; // if you minus a then it willl return the index of the next immidiate greater number or number itself if exist
  cout << i << endl; // 3

  vector<int> vec;
  vec.emplace_back(1);
  vec.emplace_back(2);
  vec.emplace_back(3);
  vec.emplace_back(4);
  vec.emplace_back(6);

  int in = lower_bound(vec.begin(), vec.end(), 4) - vec.begin(); // 3
  int iu = upper_bound(vec.begin(), vec.end(), 4) - vec.begin(); // 4 it will never return the element itself it will always return address next after to it

  cout << in << endl;
  cout << iu << endl;
  return 0;
}