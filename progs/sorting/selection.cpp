#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };

    for(int i=0;i<arr.size();i++){
        int min = 10;
        int index;
        for(int j=i;j<arr.size();j++){
            if(arr[j] <= min){
                min = arr[j];
                index = j;
            }
        }
        cout << "min " << index <<"-"<< arr[index] << endl;
        swap(arr[i], arr[index]);
    }

    for(auto i = arr.begin();i<arr.end();i++){
        cout << *i << " ";
    }

    return 0;
}