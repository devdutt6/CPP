#include <bits/stdc++.h>
using namespace std;

// Q. Given N piles of bananas, the ith pile has piles[i] bananas and H hours time until guards return (N < H). Find the minimum (S) bananas to eat per hour such that Koko can eat all the bananas within H hours. Each hour, Koko chooses some pile of bananas and eats S bananas from that pile. If the pile has less than S bananas, then she consumes all of them, and wont eat any more bananas during that hour.

int Solve(int N, vector<int>& piles, int H) {
  int start = 1, end = 1e9;
  while( start<end ){
    int mid = start + ((end-start)/2);
    int sum = 0;
    for( auto i = 0;i<N;i++ ){
      sum += (piles[i]+mid-1)/mid;
      // sum += ((pil/es[i]/mid) + (piles[i]%mid > 0 ? 1 : 0));
    }
    // if( sum == H ){
    //   return mid;
    // }
    // else
    if( sum > H ){
      start = mid+1;
    }
    else{
      end = mid;
    }
  }
  return start;
}
int main(){
  vector<int> arr = {3, 6, 7, 11};

  cout << Solve(4, arr, 8) << endl;
  return 0;
}