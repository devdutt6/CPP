#include <bits/stdc++.h>
using namespace std;

// Q. Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

// ? my solution
// int median(vector<int>& array1, vector<int>& array2){
//   int s1 = array1.size();
//   int s2 = array2.size();
//   int n = s1+s2;
//   int a = 0, b, c;
//   if( n%2 == 0 ){
//     b = n/2;
//     c = b+1;
//   }
//   else{
//     b = (n/2)+1;
//     c = (n/2)+1;
//   }
//   double count = 0, i = 0, j = 0, last = INT_MIN, secondlast;
//   // double ans;
//   while( count < c && i < s1 && j < s2 ){
//     if( array1[i]<=array2[j] ){
//       secondlast = last;
//       last = (double)array1[i];
//       count++;
//       i++;
//     }
//     else{
//       secondlast = last;
//       last = (double)array2[j];
//       count++;
//       j++;
//     }
//   }
//   while( count < c && i < s1 ){
//     secondlast = last;
//     last = (double)array1[i];
//     count++;
//     i++;
//   }
//   while( count < c && j < s2 ){
//     secondlast = last;
//     last = (double)array2[j];
//     count++;
//     j++;
//   }
//   if( b == c ){
//     return last;
//   }
//   else{
//     return (secondlast + last)/2.0;
//   }
// }

// ?optimized
double median(vector<int>& arr, vector<int>& arr2){
  int n1 = arr.size();
  int n2 = arr2.size();
  if( n2<n1 ) return median(arr2, arr);
  int start = 1, end = n1;

  while(start<=end){
    int cut1 = (start+end) >> 1;
    int cut2 = (n1+n2+1)/2- cut1;

    int l1 = cut1 == 0 ? INT_MIN : arr[cut1-1];
    int l2 = cut2 == 0 ? INT_MIN : arr2[cut2-1];
    int r1 = cut1 == n1 ? INT_MAX :  arr[cut1];
    int r2 = cut2 == n2 ? INT_MAX :  arr2[cut2];

    if( l1<=r2 && l2<=r1 ){
      if( (n1+n2)%2 == 0 ){
        return (max( l1, l2 ) + min ( r1, r2 ))/2.0;
      }
      else{
        return max(l1, l2);
      }
    }
    else if( l1>r2 ){
      end = cut1-1;
    }
    else{
      start = cut1+1;
    }
  }
  return 0.0;
}

int main(){
  vector<int> arr = { 1, 5, 9 };
  vector<int> arr2 = { 2, 3, 6, 7 };

  cout << median(arr, arr2) << endl; // 5

  return 0;
}
