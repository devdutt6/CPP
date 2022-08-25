#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v; // declaring
  vector<pair<int, int>> vec; // declaring
  vector<int> v1(5,100); // declaring with size with initial value
  vector<int> kak(5); // also declaring size without initial value
  vector<int> v2(v1); // copying

  v.push_back(1); // push to vector
  vec.push_back({ 1, 2 });

  v.emplace_back(2); // also pushed the element in vector but it does it dynamically and it is faster than push_back
  vec.emplace_back(3, 4);

  cout << v[0] << v.at(1)<< "\n"; // accessing

  cout << v.back();  // for the back of the vector

  vector<int>::iterator it = v.begin(); // points to the start memory location
  vector<int>::iterator i2 = v.end(); // points to after end memory location it will be some garbage use i2-- and accesss the last element
  // vector<int>::iterator it = v.rend(); // points before beginning
  // vector<int>::iterator it = v.rbegin(); // points at end of vector

  cout << "reference" << *(it) << "\n"; // accessing value from pointer

  it++; // as all the values are stored in contigious manner
  cout << *(it);

  //different ways to iterate
  for( vector<int>::iterator it = v.begin();it != v.end(); it++ ){
    cout << *(it) << " ";
  }
  cout << "\n";
  for( auto it = v.begin();it != v.end(); it++ ){
    cout << *(it) << " ";
  }
  cout << "\n";
  for( auto it : v ){
    cout << it << " ";
  }
  //{ 10, 20, 30, 40, 50 }
  v.erase(v.begin()+1, v.begin()+3); // end will not be included
  // { 10, 40, 50 }

  v.insert(v.begin(), 2, 5); // ( reference to before which position to insert, counts, number itself )

  v.size(); // size

  v.clear(); // clear the vector
  cout << v.empty(); // to check weather it is empty
  return 0;
}