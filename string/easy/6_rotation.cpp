#include <bits/stdc++.h>
using namespace std;

// Q. Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.

bool areRotations(string s1,string s2){
  int i = 0, j=0;

  if(s1.length() != s2.length()) return false;
  int n = s1.length();
  for(int i=0; i<n; i++){
    //check for first char of s1 in s2
    if(s2[i] == s1[0])
    {
      //check whether two string are equal
      bool flag = true;
      for(int j=0; j<n; j++){
        if(s2[(i+j)%n] != s1[j]) flag = false;
      }
      if(flag) return true;
    }
  }

  return false;
}

int main(){
  string s1 = "geeksforgeeks";
  string s2 = "forgeeksgeeks";

  cout << areRotations(s1, s2);

  return 0;
}