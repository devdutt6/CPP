#include<iostream>

using namespace std;

int main() {
  int space = 5;
  for ( int i=1;i<=4;i++ ){
    int temp = space;
    for( int j=0;j<i;j++ ){
      cout << 4-j;
    }
    while( temp>0 ){
      cout << 4-i+1;
      temp--;
    }
    for( int j=i-1;j>=0;j-- ){
      if(j!=4-1){
        cout << 4-j;
      }
    }
    space -= 2;
    cout<<"\n";
  }
  space = 1;
  for ( int i=3;i>=1;i-- ){
    int temp = space;
    for( int j=0;j<i;j++ ){
      cout << 4-j;
    }
    while( temp>0 ){
      cout << 4-i+1;
      temp--;
    }
    for( int j=i-1;j>=0;j-- ){
      cout << 4-j;
    }
    space += 2;
    cout<<"\n";
  }
  return 0;
}