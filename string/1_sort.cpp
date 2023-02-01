#include <bits/stdc++.h>
using namespace std;

// Q. Sort characters by frequency
static bool cmp(pair<int, int> &a, pair<int, int> &b){
  if(a.first==b.first) return a.second<b.second;
  return a.first>b.first;
}

void sortf(int arr[], int n){
  map<int, int> mp;
  vector<pair<int, int>> v;
  for(int i =0;i<n;i++){
    if(mp[arr[i]]) mp[arr[i]]++;
    else mp[arr[i]] = 1;
  }

  for(auto i : mp){
    // cout << i.first << "-" << i.second << endl;
    v.push_back({i.second, i.first});
  }
  sort(v.begin(), v.end(),cmp);
  for(auto i : v){
    for(int j=0;j<i.first;j++){
      cout << i.second << " ";
    }
  }
  cout << endl;
  return;
}

int main(){
  int arr[] = { 5, 5, 4, 6, 6 }; // 5 5 6 6 4

  sortf(arr, 5);

  return 0;
}