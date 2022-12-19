#include <bits/stdc++.h>
using namespace std;

// Q. Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer target, the task is to find the index of target, if its present in the array Arr[]. Otherwise, find the index where target must be inserted to keep the array sorted.

/**
 * @brief it returns the index of target if found else returns the insertion index of element
 *
 * @param vector<int> arr
 * @param int target
 * @return int
 */
int insertIndex(vector<int>& arr, int target){
  int i = 0, j = arr.size()-1;

  if( arr[0] > target ){
    return 0;
  }
  if( arr[j] < target ){
    return j+1;
  }

  while( i<=j ){
      cout << "from "<< i << "to " << j<<endl;
    if( i == j ){
      cout << "equal index at "<< i << " " << j<<endl;
      while( arr[i] < target && i<arr.size()-1 ){
        i++;
      }
      return i;
    }

    int mid = (i+j)/2;

    if( arr[mid] == target){
      cout <<"equal"<<endl;
      return mid;
    }
    else if( arr[mid] < target ){
      cout << "target greater" <<endl;
      i = mid+1;
    }
    else{
      cout << "smaller target"<<endl;
      j = mid-1;
      cout << j <<endl;
    }
  }
  j++;
  return j;

}

int main(){
  // vector<int> arr = { 1, 2, 8, 10, 11, 12, 15 };
  vector<int> arr = { -92, -72, -61, -20, 1, 3, 4, 10, 12, 13, 15, 17, 22, 23, 26, 28, 30, 32, 34, 35, 40, 54, 56, 58, 60, 61, 66, 70, 74, 75, 76, 78, 79, 81, 82, 86, 88, 92, 93, 95, 96, 98 };

  cout << insertIndex(arr, -66) << endl; // 2

  return 0;
}