#include <bits/stdc++.h>
using namespace std;

// Q. Convert  roman to integer

int switchh(char ch){
  int i;
  switch(ch){
    case ('I'):
      i = 1;
      break;
    case ('V'):
      i = 5;
      break;
    case ('X'):
      i = 10;
      break;
    case ('L'):
      i = 50;
      break;
    case ('C'):
      i = 100;
      break;
    case ('D'):
      i = 500;
      break;
    case ('M'):
      i = 1000;
      break;
    default:
      i = 0;
      break;
  }
  return i;
}

int romanToDecimal(string &str) {
  int sum = switchh((char)(str[0]));
  char prev = str[0];
  for(int i =1;i<str.length();i++){
    if(switchh(str[i]) > switchh(prev)) sum += switchh(str[i]) - (2*switchh(prev));
    else sum += switchh(str[i]);
    prev = str[i];
  }
  return sum;
}

int main(){
  string s1 = "CMXVI"; // 916

  romanToDecimal(s1);

  return 0;
}