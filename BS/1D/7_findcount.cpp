#include <bits/stdc++.h>
using namespace std;

// Q. find the the count of some element's occurance in an array

/**
 * @brief count the occurance of element in an array
 *
 * @param vector<int>
 * @param int target
 * @return int
 */
int count( vector<int>& arr, int target ){
  int i=0,j=arr.size()-1, temp = -1, count=0;

  while( i<=j ){
    int mid = i + (j-i)/2;

    if( arr[mid] == target ){
      temp = mid;
      i = mid+1;
    }
    else if( target>arr[mid] ){
      i=mid+1;
    }
    else{
      j=mid-1;
    }
  }

  if( temp == -1 ) return 0;
  else{
    while( arr[temp] == target && temp >= 0 ){
      temp--;
      count++;
    }
    return count;
  }
}

int main(){
  vector<int> arr = { -92, -92, -92, -72, -61, -20, 1, 3, 4, 10, 12, 13, 15, 17, 22, 23, 26, 28, 30, 32, 34, 35, 40, 54, 56, 58, 60, 61, 66, 70, 74, 75, 76, 78, 79, 81, 82, 86, 88, 92, 92, 92, 93, 95, 96, 98 };

  cout << count(arr, 92) << endl; // 3

  return 0;
}