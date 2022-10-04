#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int ma[] = { 1, 3, 5, 7, 9, 11 };
  int mi[] = { 1, 2, 3, 4, 5 };
  int m = 6;
  int n = 5;
  vector<int> uni;
  vector<int> inte;
  int i = 0;
  int j = 0;
  while( i<m && j<n ){
    if( ma[i] == mi[j] ){
      inte.push_back(ma[i]);
      uni.push_back(ma[i]);
      i++;j++;
    }
    else if( ma[i] > mi[j] ){
      while( ma[i] > mi[j] ){
        uni.push_back(mi[j]);
        j++;
      }
    }
    else if( ma[i] < mi[j] ){
      while( ma[i] < mi[j] ){
        uni.push_back(ma[i]);
        i++;
      }
    }
  }

  while( i<m ){
    uni.push_back(ma[i]);
    i++;
  }
  while( j<n ){
    uni.push_back(ma[j]);
    j++;
  }
  cout<< "union: " << endl;
  for( auto i : uni ){
    cout << i << " ";
  }
  cout << endl;
  cout<< "intersection: " << endl;
  for( auto i : inte ){
    cout << i << " ";
  }

  return 0;
}
// ? non optimized
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void unionof(int arr[], int arr2[], int n, int k){
//   vector<int> v;
//   map<int, int> un;
//   for(int i=0;i<n;i++){
//     un[arr[i]] = 1;
//   }
//   for(int i=0;i<k;i++){
//     if( un[arr2[i]]>0 ){
//       v.push_back(arr2[i]);
//     }
//     un[arr2[i]] = 1;
//   }

//   // union
//   cout << "union: " ;
//   for(auto i : un){
//     cout << i.first << " ";
//   }
//   cout << endl;
//   // intersection
//   cout << "intersection: ";
//   for( auto i=v.begin();i<v.end();i++ ){
//     cout << *(i) << " ";
//   }

//   return;
// }

// int main() {
//   int arr[] = { 1, 2, 3, 4, 5, 6 };
//   int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

//   unionof(arr, arr2, 6, 8);

//   return 0;
// }