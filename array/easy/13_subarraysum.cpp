#include <bits/stdc++.h>
using namespace std;

// Q. Given an array and a sum k, we need to print the length of the longest subarray that sums to k

// ?sliding window works only for positive sorted
/**
 * @brief it returns the longest subArray length having sum K using sliding window algorithm but it only works for sorted arrays with positive natural numbers.
 *
 * @param vector<int> arr
 * @param int K
 */
void subarrHavingSumK(vector<int>& arr, int K) {
  int sum = 0, i = 0, j = 0, len = arr.size();
  while( i<len && j<len ){
    while(sum < K){
      sum += arr[i];
      i++;
    }
    if( sum >= K ){
      if( sum == K ){
        cout << i-1 << " " << j ;
        return;
      }
      else{
        while( sum > K ){
          sum -= arr[j];
          j++;
        }
      }
    }
  }
  cout << "no sum";
  return ;
  // int start = 0, end = -1, sum = 0, maxLength = 0;
  // while (start < n) {
  //   while ((end + 1 < n) && (sum + arr[end + 1] <= k))
  //     sum += arr[++end];

  //   if (sum == k)
  //     maxLength = max(maxLength, (end - start + 1));

  //   sum -= arr[start];
  //   start++;
  // }
  // return maxLength;
}

/**
 * @brief it returns the longest subArray length having sum K
 *
 * @param vector<int> arr
 * @param int K
 * @return int length
 */
int lenOfLongSubarr(vector<int>& arr, int K){
  int sum = 0, maxi = 0, len = arr.size(), i = 0;
  map<int, int> mp;

  while(i<len){
    sum += arr[i];
    if( sum == K ) return (i + 1);
    if( mp[sum] > 0 ){
      if( maxi<(i-mp[sum]) ){
        maxi = i - mp[sum];
      }
    }
    else mp[sum] = i;
    i++;
  }
  return maxi;
}

int main() {
  vector<int> arr = {1, 2, 3, 5, 7, 9, 10, 11, 12, 13, 14, 15, 16}; // sorted array for sliding window
  // vector<int> arr = {-13, 0, 6, 15, 16, 2 ,15, -12, 17, -16, 0 ,-3, 19, -3, 2, -9, 6};

  // cout << "longest length: " << lenOfLongSubarr(arr, 15) << endl;
  cout << "sliding window" << endl;
  subarrHavingSumK(arr, 15);

  return 0;
}