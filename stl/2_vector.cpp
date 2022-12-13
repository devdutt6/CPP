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
  cout << v.front() << endl; // 1 // prints the first element from vector.
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
  }// 1 2
  cout << endl;

  //! auto
  // here auto is dynamic data type assigner auto will automatically assign the type at runtime.
  for( auto it = v.begin();it != v.end(); it++ ){
    cout << *(it) << " ";
  }// 1 2
  cout << endl;

  // here auto will automatically get the value from the vector v so we dont have to access value manually
  for( auto it : v ){
    cout << it << " ";
  }// 1 2

  v1[0] = 1;v1[1] = 2;v1[2] = 3;v1[3] = 4;v1[4] = 5; // { 1, 2, 3, 4, 5 }

  //! erase
  // erase function will remove the specified memory location and will reshuffle the array in a contigious memory
  v1.erase(v1.begin() + 1); // erases the element at first index { 1, 3, 4, 5 }
  v1.erase(v1.begin()+2, v1.begin()+4); // [begin index, end index) end index will not get removed all the elemetn before it will be removed { 1, 3 }

  //! insert
  // will insert the element at specified index and will reshuffle vector in accordance
  v1.insert(v1.begin()+1, 2); // (index, value) //{ 1, 2, 3 }
  v1.insert(v1.begin()+2, 2, 5); // (index, count, value) // { 1, 2, 3, 5, 5 }
  v1.insert(v1.begin(), v2.begin(), v2.end()); // (index, from some memory, till some memory ) // { 0, 0, 0, 0, 0, 1, 2, 3, 5, 5 }

  //! other utils
  cout << "v1 size: " << v1.size() << endl; // return the size of vector in number of elements

  v1.clear(); // it will make the vector empty
  v1.resize(3); // it will resize the vector such that it can only hold 3 elems at a time but if there are alreadymore element than specified limit it will do nothing
  v1.shrink_to_fit(); // it will resize the vector such that it will only be containing the elements no empty spaces
  v1.capacity(); // similar as size()
  v1.reserve(5); // it will make vector such that it can atleast hold 5 elems.

  v1.assign(5, 10); // (size, value) // it assigns new value to the vector elements by replacing old ones
  v1.pop_back(); // removed the element from back
  v1.emplace(v1.begin(), 1); // it extends the container by inserting new element at position
  v1.swap(v2); // swaps the elements in vectors not matter the size but the datatype should be same

  cout << v1.empty() << endl; // if empty yes otherwise false
  return 0;
}