#include <bits/stdc++.h>
using namespace std;

// Q. Given an string S, representing a large interger. Return the largest-valued odd integer (as a string) that is substring of the given string S

int main(){
  string s = "504";

  string index = "";
  for(auto i = s.end()-1;i!=s.begin()-1;i--){
    if( int (*i - '0') % 2 != 0 ){
      for( auto j = s.begin();j<i+1;j++ ){
        index.push_back(*j);
      }
      break;
    }
  }
  cout << index << endl;

  return 0;
}