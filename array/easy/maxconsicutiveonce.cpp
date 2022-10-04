#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = { 1,1,0, 1, 1, 1, 0, 0, 1, 1, 1 };

    int count = 0;
    int max = 0;
    for( int i=0;i<10;i++ ){
      if(arr[i] == 1){
        count++;
        if( count>max ){
          max = count;
        }
      }
      else{
        count = 0;
      }
    }

    cout << "maximum are: " << max;

    return 0;
}