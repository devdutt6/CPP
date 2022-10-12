#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> a = {100, 200, 1, 3, 2, 4};
  set<int> st;
  for(int num : a){
    st.insert(num);
    // cout << num << " ";
  }

  int longstreak = 0;
  for(int num: a){
    if( !st.count( num-1 ) ){
      int currentNum = num;
      int currStreak = 1;
      while( st.count( currentNum+1 ) ){
        currentNum += 1;
        currStreak += 1;
      }
      longstreak = max(longstreak, currStreak);
    }
  }

  cout << "max: " << longstreak;
  return 0;
}