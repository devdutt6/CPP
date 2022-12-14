#include <bits/stdc++.h>

using namespace std;
// Q. Print the fibbonaci series till given count

// printing fibbonacci numbers with recursion
void fibbo( int n, int first, int second, int limit ){
  if(n>=limit){
    cout << endl;
    return;
  }
  else if( n==0 ){
    cout << 0 << " ";
    return fibbo(1, 0, 0, limit);
  }
  else if( n==1 ){
    cout << 1 << " ";
    return fibbo(2, 0, 1, limit);
  }
  else{
    int temp = first + second;
    first = second;
    second = temp;
    cout << temp << " ";
    return fibbo(n+1, first, second, limit);
  }
}

int main() {
  int limit;
  cout << "enter: " ;
  cin >> limit;

  fibbo(0, 0, 0, limit);
  return 0;
}