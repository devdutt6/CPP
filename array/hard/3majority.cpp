#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> a = { 1, 2, 3, 2, 3, 3, 4, 5, 5, 3 };
  map<int, int> mp;
  int n = a.size();

  for(int i=0;i<n;i++){
    if(mp[a[i]]){
      mp[a[i]] += 1;
    }
    else{
      mp[a[i]] = 1;
    }
  }

  for(auto i : mp){
    if(i.second > (n/3)){
      cout << i.second << " ";
    }
  }

    return 0;
}