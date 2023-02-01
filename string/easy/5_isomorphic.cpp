#include <bits/stdc++.h>
using namespace std;

// Q. Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.

bool areIso(string s1, string s2){
  if(s1.size()!=s2.size()) return 0;
  unordered_map<char,char> mp1,mp2;

  for(int i=0;i<s1.length();i++){
    // char pp = str1[i];
    mp1[s1[i]] = s2[i];
    mp2[s2[i]] = s1[i];
  }
  for(int i=0;i<s1.size();i++){
    // char pp = str1[i];
    if(mp1[s1[i]]!=s2[i]) return false;
    if(mp2[s2[i]]!=s1[i]) return false;
  }
  return true;
}

int main(){
  string s1 = "fvladzpbf";
  string s2 = "pijthbsfy";

  bool ans = areIso(s2, s1);
  cout << ans;
  return 0;
}