#include <bits/stdc++.h>
using namespace std;

// Q. Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters.
// "abaaca", 1 // a b a aa c a

long long int substrCount(string s, int K){
  unordered_set<char> st;
  int count = 0;

  for( int i = 0; i<s.length(); i++ ){
    st.insert(s[i]);
    if( st.size() <= K) count++;
    else{
      st.clear();
      i--;
    }
  }

  return count;
}

int main(){
  string s1 = "aba";
  cout << substrCount(s1, 2) << endl;
  return 0;
}