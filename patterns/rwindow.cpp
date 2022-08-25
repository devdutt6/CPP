#include<iostream>

using namespace std;

int main() {
  for ( int i=5;i>=0;i-- ){
    int stars = 5-i;
    int back = 5-i;
    while( stars > 0 ){
      cout<<"*";
      stars--;
    }
    int spaces = i*2;
    while( spaces>0 ){
      cout<<" ";
      spaces--;
    }
    while( back > 0 ){
      cout<<"*";
      back--;
    }
    cout<<"\n";
  }
  for ( int i=1;i<=4;i++ ){
    int stars = 5-i;
    int back = 5-i;
    while( stars > 0 ){
      cout<<"*";
      stars--;
    }
    int spaces = i*2;
    while( spaces>0 ){
      cout<<" ";
      spaces--;
    }
    while( back > 0 ){
      cout<<"*";
      back--;
    }
    cout<<"\n";
  }
  return 0;
}