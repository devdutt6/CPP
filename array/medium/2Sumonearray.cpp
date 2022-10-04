#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// ?one array
// int main() {
//   int arr[] = { 2, 3, 4, 6, 7, 8, 1 };
//   map<int, int> mp;
//   vector<pair<int, int>> p;
//   for(int i=0;i<7;i++){
//     // cout << i << " ";
//     int need = 9 - arr[i];
//     mp[arr[i]] = i+1;
//     if(mp[need]>0){
//       p.push_back({ i, mp[need] - 1 });
//       cout << "i: "<<i<< " j: " << mp[need] - 1<<endl;
//     }
//   }

//   return 0;
// }

// ?two array
int main() {
  int arr[] = {1, 2, 4, 5, 7};
  int arr2[] = {5, 6, 3, 4, 8} ;
  map<int, int> mp;
  vector<pair<int, int>> p;

  for(int i=0;i<5;i++){
    mp[arr[i]] = i+1;
  }

  for(int i=0;i<5;i++){
    int need = 9 - arr2[i];
    if(mp[need]>0){
      p.push_back({ arr2[i], arr[mp[need] - 1] });
      cout << "i: "<<arr2[i]<< " j: " << arr[mp[need] - 1]<<endl;
    }
  }

  return 0;
}