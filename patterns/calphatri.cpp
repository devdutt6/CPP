#include<iostream>

using namespace std;

int main() {
  for ( int i=1;i<=5;i++ ){
    int n = 64;
    for ( int j=1;j<=i;j++ ){
      char a = char(n+i);
      cout << a;
    }
    cout << "\n";
  }
  return 0;
}