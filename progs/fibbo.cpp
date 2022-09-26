#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fibbo( int n, int first, int second, int limit ){
  if(n>=limit){
    return;
  }
  else if( n==0 ){
    cout << 0 << " ";
    fibbo(1, 0, 0, limit);
  }
  else if( n==1 ){
    cout << 1 << " ";
    fibbo(2, 0, 1, limit);
  }
  else{
    int temp = first + second;
    first = second;
    second = temp;
    cout << temp << " ";
    fibbo(n+1, first, second, limit);
  }
}

int main() {
  int limit;
  cout << "enter: " ;
  cin >> limit;

  fibbo(0, 0, 0, limit);
  return 0;
}