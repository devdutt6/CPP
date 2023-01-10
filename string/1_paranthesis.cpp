#include <bits/stdc++.h>
using namespace std;

// Q. A valid parentheses string is either empty "", "(" + X + ")", or X + Y, where X and Y are valid parentheses strings, and + represents string concatenation.For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

int main(){
  string str = "()()";
  // string str = "(()())(())";
  string str1;

  int count = 0;
  int lastzero = 0;
  for(int i = 0;i<str.length();i++){
    // cout << i <<endl;

    if( str[i] == '(' ){
      count++;
    }
    else{
      count--;
    }
    if(count == 0) {
      cout << lastzero << " " << i << endl;
      for(int j = lastzero+1;j<i;j++){
        str1.push_back(str[j]);
      }
      lastzero = i+1;
    }
  }

  for( char an : str1 ){
    cout << an;
  }

  return 0;
}