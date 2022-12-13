#include<bits/stdc++.h>
using namespace std;

int main() {
  // list is a container similar as vector but with the diff being list is a doubly LL internally and vector is LL internally so list supports better actions on front of the list too.
  list<int> ls;
  list<int> ls2(3, 2);

  ls.push_back(1);
  ls.emplace_back(2); // { 1, 2 }

  for( auto it : ls ){
    cout << it << " ";
  }
  cout << endl;

  // all the other functions apart from push_front(), emplace_front() are same as vector so no need to go deep again.
  // In vector front actions are costly as it is singly LL so we use list where we need front focused actions.
  ls.push_front(0); // { 0, 1, 2 }
  ls.emplace_front(-1); // { -1, 0, 1, 2 }

  for( auto it : ls ){
    cout << it << " ";
  }
  cout << endl;

  //! other utils
  ls.pop_front(); // guess
  ls.remove(3); //  removed element matching value
  ls.remove_if(1 == 1); //  removed element if predicate returns true
  ls.reverse(); // reverse the list
  ls.unique(); // removes all consecutive duplicates
  ls.splice(ls.begin(), ls2, ls2.begin(), ++ls2.begin()); // adds new list at specified position
  ls.merge(ls2); // merge two sorted array into one.

}