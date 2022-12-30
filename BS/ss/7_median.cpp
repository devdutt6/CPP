#include <bits/stdc++.h>
using namespace std;

// Q. Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

int median(vector<int>& array1, vector<int>& array2){
  int s1 = array1.size();
  int s2 = array2.size();

  int n = s1+s2;
  int a = 0, b, c;
  if( n%2 == 0 ){
    b = n/2;
    c = b+1;
  }
  else{
    b = (n/2)+1;
    c = (n/2)+1;
  }
  double count = 0, i = 0, j = 0, last = INT_MIN, secondlast;
  // double ans;
  while( count < c && i < s1 && j < s2 ){
    if( array1[i]<=array2[j] ){
      secondlast = last;
      last = (double)array1[i];
      count++;
      i++;
    }
    else{
      secondlast = last;
      last = (double)array2[j];
      count++;
      j++;
    }
  }

  while( count < c && i < s1 ){
    secondlast = last;
    last = (double)array1[i];
    count++;
    i++;
  }
  while( count < c && j < s2 ){
    secondlast = last;
    last = (double)array2[j];
    count++;
    j++;
  }
  if( b == c ){
    return last;
  }
  else{
    return (secondlast + last)/2.0;
  }
}

int main(){
  vector<int> arr = { 1, 5, 9 };
  vector<int> arr2 = { 2, 3, 6, 7 };

  cout << median(arr, arr2) << endl; // 5

  return 0;
}
