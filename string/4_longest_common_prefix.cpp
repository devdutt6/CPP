#include <bits/stdc++.h>
using namespace std;

// Q. Return the longest common prefix from the list of strings

string longestCommonPrefix (string arr[], int N)
{
  string common;

  for(int i=0;i<arr[0].length();i++){
    bool flag = false;
    for( int j=1;j<N;j++ ){
      if( i==arr[0].length() || (arr[0])[i] != (arr[j])[i] ){
        flag = true;
        break;
      }
    }
    if(flag) break;
    common.push_back((arr[0])[i]);
  }

  if(common.length() == 0) return "-1";
  else return common;
}

int main(){
  // string arr[] = {"developer", "devdutt", "devasya"}; // dev
  string arr[] = {"Hello", "world"}; // -1

  string ans = longestCommonPrefix(arr, 3);
  cout << ans;
  return 0;
}