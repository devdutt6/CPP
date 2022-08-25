#include<iostream>

using namespace std;

void blank(int space) {
  while ( space > 0 ){
    cout << " ";
    space--;
  }
}
void print(int stars) {
  while ( stars > 0 ){
    cout << "*";
    stars--;
  }
}

int main() {
  int stars = 1;
  for ( int i=1;i<=5;i++ ){
    int gap = 5 - i;
    blank( gap );
    int temp = stars;
    print( temp );
    stars += 2;
    cout << "\n";
  }
  stars = 9;
  for ( int i=5;i>0;i-- ){
    int gap = 5 - i;
    blank( gap );
    int temp = stars;
    print( temp );
    stars -= 2;
    cout << "\n";
  }
  return 0;
}