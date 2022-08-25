#include<iostream>

using namespace std;

int main() {
  int pic;
  for ( int i=1;i<=5;i++ ){
    for( int j=0;j<i;j++ ){
      if( i%2 == 0 && j%2 == 0){
        cout << 0;
      }
      else if( (i%2 == 1 && j%2 == 0) || (i%2 == 0 && j%2 == 1) ){
        cout << 1;
      }
      else if( i%2 == 1 && j%2 == 1 ){
        cout << 0;
      }
    }
    cout << "\n";
  }
  return 0;
}