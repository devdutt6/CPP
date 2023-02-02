#include <bits/stdc++.h>
using namespace std;

// Q. Impliment AtoI function

int Atoi(string s1){
  int len = s1.length(), tens = ceil(pow(10, len-1)), sum = 0;
  bool flag = false, minus = false;
  if(s1[0] == '-') {
    minus = true;
    tens = ceil(pow(10, 2));
    len -= 1;
    s1 = s1.substr(1);
  }

  for(int i=0;i<len;i++){
    if(isdigit(s1[i])) {
      sum += (s1[i]-48)*tens;
      tens /= 10;
    }
    else{
      flag=true;
      break;
    };
  }
  if(flag) return -1;
  else{
    if(minus) return -sum;
    return sum;
  }
}

int main(){
  string s1 = "-213";

  cout << Atoi(s1) << endl;
  return 0;
}
