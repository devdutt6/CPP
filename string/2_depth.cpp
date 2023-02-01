#include <bits/stdc++.h>
using namespace std;

// Q. return the maximum depth of some vpc in string

int maxDepth(string s) {
  int count =0, maxi=INT_MIN;
  for(int i = 0;i<s.length();i++){
    if( (char)s[i] == '(' ) count++;
    else if((char)s[i] == ')') count--;
    else {}
    maxi = max(count, maxi);
  }

  return maxi;
}

int main(){
  string s1 = "()((())())"; // 2

  cout << maxDepth(s1)<<endl;
  return 0;
}