#include <bits/stdc++.h>
using namespace std;

/**
 * @brief union of two vectors but using two pointer method
 *
 * @param vector<int> arr
 * @param vector<int> arr2
 * @return vector<int>
 */
vector<int> unionVec(vector<int>& arr, vector<int>& arr2){
  vector<int> vec;
  int i=0,j=0,n1=arr.size(),n2=arr2.size();

  while(i<n1 && j<n2){
    if( arr[i] <= arr2[j] ){
      if( vec.size() == 0 || vec.back() != arr[i] ){
        vec.emplace_back(arr[i]);
      }
      i++;
    }
    else{
      if( vec.size() == 0 || vec.back() != arr2[j] ){
        vec.emplace_back(arr2[j]);
      }
      j++;
    }
  }

  while (i<n1){
    if( vec.back() != arr[i] ){
      vec.emplace_back(arr[i]);
    }
    i++;
  }
  while (j<n2){
    if( vec.back() != arr2[j] ){
      vec.emplace_back(arr2[j]);
    }
    j++;
  }

  return vec;
}


/**
 * @brief union of two vectors but using Map
 *
 * @param vector<int> arr
 * @param vector<int> arr2
 * @return vector<int>
 */
vector<int> unionMap(vector<int>& arr, vector<int>& arr2){
  vector<int> vec;
  map<int, int> mp;

  int i=0,j=0,n1=arr.size(),n2=arr2.size();
  while(i<n1){
    mp[arr[i]] = 1;i++;
  }
  while(j<n2){
    mp[arr2[j]] = 1;j++;
  }

  for(auto i: mp){
    vec.emplace_back(i.first);
  }

  return vec;
}

/**
 * @brief union of two vectors but using Set
 *
 * @param vector<int> arr
 * @param vector<int> arr2
 * @return vector<int>
 */
vector<int> unionSet(vector<int>& arr, vector<int>& arr2){
  vector<int> vec;
  set<int> st;

  int i=0,j=0,n1=arr.size(),n2=arr2.size();
  while(i<n1){
    st.emplace(arr[i]);i++;
  }
  while(j<n2){
    st.emplace(arr2[j]);j++;
  }

  for(auto i: st){
    vec.emplace_back(i);
  }

  return vec;
}


int main(){
  vector<int> arr = {1, 3, 3, 3, 5, 7, 9, 11};
  vector<int> arr2 = {1, 2, 3, 3, 4, 5};

  // vector<int> vec = unionVec(arr, arr2);
  // vector<int> vec = unionMap(arr, arr2);
  vector<int> vec = unionSet(arr, arr2);

  for(auto i: vec){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}