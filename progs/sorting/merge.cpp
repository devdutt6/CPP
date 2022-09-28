#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge( vector<int> &arr, int l, int mid, int r ){
  int n1 = mid-l+1;
  int n2 = r-mid;

  vector<int> arr1(n1, 0);
  vector<int> arr2(n2, 0);

  for( int i=0;i<n1;i++ ){
    arr1[i] = arr[l+i];
  }
  for( int i=0;i<n2;i++ ){
    arr2[i] = arr[mid+1+i];
  }

  int i=0;
  int j=0;
  int count = l;
  while( i<n1 && j<n2 ){
    if( arr1[i]<arr2[j] ){
      arr[count] = arr1[i];
      i++;
      count++;
    }
    else{
      arr[count] = arr2[j];
      j++;
      count++;
    }
  }

  while( i<n1 ){
    arr[count] = arr1[i];
    count++;
    i++;
  }
  while( j<n2 ){
    arr[count] = arr2[j];
    count++;
    j++;
  }
}

void mergeSort( vector<int> &arr, int l, int r ){
  if(l<r){
    int mid = (l+r)/2;

    mergeSort( arr, l, mid );
    mergeSort( arr, mid+1, r );

    merge(arr, l, mid, r);
  }
}

int main() {
  vector<int> arr = { 2, 3, 5, 4, 5, 9, 1, 8 };

  mergeSort(arr, 0, 7);

  for( auto i = arr.begin(); i<arr.end();i++ ){
    cout << *i << " ";
  }

  return 0;
}

// ?array
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void merge( int arr[], int l, int mid, int r ){
//   int n1 = mid-l+1;
//   int n2 = r-mid;

//   int arr1[n1];
//   int arr2[n2];

//   for( int i=0;i<n1;i++ ){
//     arr1[i] = arr[l+i];
//   }
//   for( int i=0;i<n2;i++ ){
//     arr2[i] = arr[mid+1+i];
//   }

//   int i=0;
//   int j=0;
//   int count = l;
//   while( i<n1 && j<n2 ){
//     if( arr1[i]<arr2[j] ){
//       arr[count] = arr1[i];
//       i++;
//       count++;
//     }
//     else{
//       arr[count] = arr2[j];
//       j++;
//       count++;
//     }
//   }

//   while( i<n1 ){
//     arr[count] = arr1[i];
//     count++;
//     i++;
//   }
//   while( j<n2 ){
//     arr[count] = arr2[j];
//     count++;
//     j++;
//   }
// }

// void mergeSort( int arr[], int l, int r ){
//   if(l<r){
//     int mid = (l+r)/2;

//     mergeSort( arr, l, mid );
//     mergeSort( arr, mid+1, r );

//     merge(arr, l, mid, r);
//   }
// }

// int main() {
//   int arr[] = { 2, 3, 5, 4, 5, 9, 1, 8 };

//   mergeSort(arr, 0, 7);

//   for( int i = 0; i<8;i++ ){
//     cout << arr[i] << " ";
//   }

//   return 0;
// }