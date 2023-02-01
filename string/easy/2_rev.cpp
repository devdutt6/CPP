#include <bits/stdc++.h>
using namespace std;

// Q. question

// init
// int main(){
//   string str = "It is Devdutt";

//   vector<string> vc;
//   string temp;

//   for( int i =0 ; i<str.length(); i++ ){
//     if( str[i] != ' ' ) temp.push_back(str[i]);
//     if( str[i] == ' ' || i == str.length()-1 ){
//       vc.emplace_back(temp);
//       temp.clear();
//     }
//   }

//   temp.clear();
//   auto i = vc.end();
//   i--;
//   for( auto j = i;i>=vc.begin();i-- ){
//     temp += *i + '_';
//   }
//   temp.pop_back();
//   for(auto i : temp){
//     cout << i;
//   }

//   return 0;
// }


int main(){
  string str = "It_is_Devdutt", temp, ans;
  int lastindex = 0;
  for(int i = 0;i<str.length();i++){
    if( str[i] == '_' ){
      for( int j = i-1;j>=lastindex;j-- ){
        temp.push_back(str[j]);
      }
      ans += temp + '_';
      temp.clear();
      lastindex = i+1;
    }
    else if(i == str.length()-1){
      for( int j = i;j>=lastindex;j-- ){
        temp.push_back(str[j]);
      }
      ans += temp;
      temp.clear();
    }
  }
  // ans.pop_back();

  for(auto i = ans.rbegin(); i!=ans.rend();i++){
    cout << *(i);
  }

  return 0;
}