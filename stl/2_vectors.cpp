#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v; // a vector with name v with its elements data type as int
  vector<pair<int, int>> vp; // a vectory with pair as element data type
  vector<int> v1(5, 100); // { 100, 100, 100, 100, 100 }
  vector<int> v2(5); // { 0, 0, 0, 0, 0 }
  vector<int> v3(v1); // copyies the values of vector v1 in v3

  v.push_back(1); // pushes back after the last element of avector evenif the length is predefined and crossed.
  v.emplace_back(2); // does the same as push_back but a little faster cause of dynamic typing and space allocation.

  vp.push_back({ 1, 3 }); // push pair in array.
  vp.emplace_back(1, 3); // dont have to pass as pair cause of dynamic typing as we did on line 14.

  cout << v[0] << " " << v.at(0) << endl; // 1 1 // prints the element at index 0
  cout << v.back() << endl; // 2 // prints the last element from vector.


  //! iterators

  // vector<int>::iterator is a datatype signifing it is a iterator for vector of int
  vector<int>::iterator a = v.begin(); // it returns the memory location of the first element of vector

  // By passing memory location between brakets of *() you can get the value of the element stored there.
  cout << *(a) << endl; // 1

  a++; // moves forward
  cout << *(a) << endl; // 2

  vector<int>::iterator end = v.end(); // it points after the last element which means it points to the garbage use end-- to point to the last element
  vector<int>::reverse_iterator ea = v.rbegin(); // points to the last element in vector
  vector<int>::reverse_iterator ae = v.rend(); // points to the location before the first element in vector.

  // iterate with for loop
  for( vector<int>::iterator it = v.begin();it != v.end(); it++ ){
    cout << *(it) << " ";
  }
  cout << endl;

  // here auto is
  for( auto it = v.begin();it != v.end(); it++ ){
    cout << *(it) << " ";
  }
  // cout << "\n";
  // for( auto it : v ){
  //   cout << it << " ";
  // }
  // //{ 10, 20, 30, 40, 50 }
  // v.erase(v.begin()+1, v.begin()+3); // end will not be included
  // // { 10, 40, 50 }

  // v.insert(v.begin(), 2, 5); // ( reference to before which position to insert, counts, number itself )

  // v.size(); // size

  // v.clear(); // clear the vector
  // cout << v.empty(); // to check weather it is empty
  return 0;
}