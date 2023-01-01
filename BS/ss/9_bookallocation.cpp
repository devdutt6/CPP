#include <bits/stdc++.h>
using namespace std;

// Q. You are given N number of books. Every ith book has A[i] number of pages. You have to allocate contiguous books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value. Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

bool countstudent(vector<int> arr, int mid, int M){
  int sum = 0, count = 0, i = 0, N = arr.size();
  while(i<N){
    sum += arr[i];
    if(count > M) return false;
    if( sum <= mid ){
      i++;
    }
    else{
      count++;
      sum = 0;
    }
  }
  return sum > 0 && count == M ? false : true;
}

int allocate(vector<int>& arr, int M){
  int start = 1, end = 1e9, ans = INT_MAX, N = arr.size();
  if( N<M ) return -1;
  while(start<=end){
    int mid = (start+end) >> 1;

    if( countstudent(arr, mid, M)){
      ans = min(ans, mid);
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return ans;
}

int main(){
  vector<int> arr = { 9, 12, 20, 42 };

  cout << allocate(arr, 3) << endl; // 42

  return 0;
}