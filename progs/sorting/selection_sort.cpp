#include <bits/stdc++.h>

using namespace std;

void selection(vector<int>& arr){
    int len = arr.size();
    for(int i=0;i<len;i++){
        int min = 10;
        int index;
        for(int j=i;j<len;j++){
            if(arr[j] <= min){
                min = arr[j];
                index = j;
            }
        }
        // cout << "min " << index <<"-"<< arr[index] << endl;
        swap(arr[i], arr[index]);
    }
}

int main() {
    vector<int> arr = { 0, 4, 6, 2, 9, 1, 5, 8 };


    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}