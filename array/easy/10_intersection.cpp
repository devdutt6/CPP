#include <bits/stdc++.h>
using namespace std;

// Q. Find the intersection of two sorted arrays.

/**
 * @brief it finds the intersection of two arrays using two pointer method
 *
 * @param vector<int> arr
 * @param vector<int> arr2
 * @return vector<int>
 */
vector<int> intersectionVec(vector<int>& arr, vector<int>& arr2){
  vector<int> vec;
  int i=0,j=0,n1=arr.size(),n2=arr2.size();

  while(i<n1 && j<n2){
    int temp = vec.size();
    if( arr[i] == arr2[j] ){
      if(temp == 0){
        vec.emplace_back(arr[i]);
      }
      else if(temp > 0 && vec[temp-1] != arr[i]){
        vec.emplace_back(arr[i]);
      }
      i++;j++;
    }
    else{
      if( arr[i]<arr2[j] ) i++;
      else if( arr[i]>arr2[j] ) j++;
    }
  }
  return vec;
}

int main(){
  vector<int> arr = {1, 3, 3, 3, 5, 7, 9, 11};
  vector<int> arr2 = {1, 2, 3, 3, 4, 5};

  vector<int> vec = intersectionVec(arr, arr2);

  for(auto i: vec){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}