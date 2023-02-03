#include <bits/stdc++.h>
using namespace std;

// Q. Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters.
// "abaaca", 1 // a b a aa c a

// long long int substrCount(string s, int K){
//   unordered_set<char> st;
//   int count = 0;

//   for( int i = 0; i<s.length(); i++ ){
//     st.insert(s[i]);
//     if( st.size() <= K) count++;
//     else{
//       st.clear();
//       i--;
//     }
//   }

//   return count;
// }

long long int atmostKdistinct (string s, int k) {
  long long beg = 0, end = 0, cnt = 0, dist_cnt = 0;
  vector<int> freq(26, 0);

  for(end=0; end<s.length(); end++){
    //acquire
    if(freq[s[end] - 'a'] == 0) dist_cnt++;
    freq[s[end] - 'a']++;

    while(beg < end && dist_cnt > k){
      //release
      freq[s[beg] - 'a']--;

      if(freq[s[beg] - 'a'] == 0) dist_cnt--;

      beg++;
    }

    if(dist_cnt <= k) cnt = cnt + (end - beg + 1);
  }

  return cnt;
}

long long int substrCount(string s, int k){
  return (atmostKdistinct(s, k) - atmostKdistinct(s, k-1));
}

int main(){
  string s1 = "aba";
  cout << substrCount(s1, 2) << endl;
  return 0;
}