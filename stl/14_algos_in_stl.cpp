#include<bits/stdc++.h>
using namespace std;

bool comp( pair<int, int> p1, pair<int, int> p2){
  if( p1.second < p2.second ) return true;
  if( p1.second > p2.second ) return false;
  // they are equal
  if( p1.first < p2.first ) return false;
  if( p1.first > p2.first ) return true;

}

int main() {
  vector<int> v;
  pair<int, int> a[] = { {4, 1}, {2, 1}, {1, 2} };

  v.emplace_back(1);
  v.emplace_back(5);
  v.emplace_back(4);
  v.emplace_back(3);
  v.emplace_back(2);

  // sort(v.begin(), v.end()); // to sort it normally
  sort(v.begin(), v.end(), greater<int>()); // to reverse sort
  sort( 1, 4, comp ); // comparator custome sorting


  for( auto it : v ){
    cout << it << " ";
  }
  cout << endl;

  int ab = 7; // in 32 bits its 000(28)111
  int cnt = __builtin_popcount(ab); // 3
  int cnt = __builtin_popcount(6); // 2

  long long num = 1682138232;
  int cnt = __builtin_popcountll(num);

  string s = "123";

  do{
    cout << s << endl;
  }while( next_permutation(s.begin(), s.end())); //  this will run in dictionary order like 123, 132, 213, 231, 312, 321
  // so if initial string will be 231 then only 2 other permutation will show so be aware to sort string first then find the permutations

  int maxi = *max_element(v.begin(), v.end());

  return 0;
}