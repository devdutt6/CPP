#include <bits/stdc++.h>
using namespace std;

// Q. find the last occurance of given target elemetn in array if not found return -1

/**
 * @brief finds the last occurance of element in array
 *
 * @param vector<int>
 * @param int target
 * @return int
 */
int findLast( vector<int>& arr, int target ){
  int i=0,j=arr.size()-1, temp = -1;

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
  return temp;
}

/**
 * @brief finds the first and last occurance of element in array
 *
 * @param vector<int>
 * @param int target
 * @return pair<int, int>
 */
pair<int, int> findElement( vector<int>& arr, int target ){
  int i=0,j=arr.size()-1, temp = -1;
  pair<int, int> p;

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

  p.second = temp;
  if(temp <= 0){
    p.first = temp;
  }
  else{
    while( arr[p.second] == arr[temp] && temp >= 0 ){
      temp--;
    }
    p.first = ++temp;
  }

  return p;
}


int main(){
  vector<int> arr = { -92, -92, -92, -72, -61, -20, 1, 3, 4, 10, 12, 13, 15, 17, 22, 23, 26, 28, 30, 32, 34, 35, 40, 54, 56, 58, 60, 61, 66, 70, 74, 75, 76, 78, 79, 81, 82, 86, 88, 92, 92, 92, 93, 95, 96, 98 };

  // cout << findLast(arr, -92) << endl;
  pair<int, int> p = findElement(arr, -92); // 0 2
  cout << p.first << endl;
  cout << p.second << endl;

  return 0;
}