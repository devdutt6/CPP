#include<bits/stdc++.h>
using namespace std;

int main() {
  pair<int, int> p = { 1, 3 };

  cout << p.first << " " << p.second << "\n";

  pair<int, pair<int, int>> q = {1, {3, 5}};
  cout << q.first << " " << q.second.first << " " << q.second.second<< "\n";

  pair<int, int> arr[] = { {1, 2}, {3, 5} };
  cout<< arr[0].first << arr[0].second<< "\n";
  cout<< arr[1].first << arr[1].second<< "\n";
  return 0;
}