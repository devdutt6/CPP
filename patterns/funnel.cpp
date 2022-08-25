#include<iostream>

using namespace std;

int main() {
  for ( int i=1;i<=4;i++ ){
    int count = 0;
    for( int j=1;j<=8;j++ ){
      if( j<=i ){
        cout << j;
        count++;
      }
      else{
        int space = 8 - (i*2);
        if( count<space+i ){
          cout<<" ";
          count++;
        }
        else{
          if( count<8 ){
            cout<< 8-count;
            count++;
          }
        }
      }
    }
    cout<<"\n";
  }
  return 0;
}