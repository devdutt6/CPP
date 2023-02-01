#include <bits/stdc++.h>
using namespace std;

// Q. Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not
bool isAnagram(string a, string b){
  int arr[250];
  for(int i=0;i<250;i++) arr[i] = 0;
  for(int i=0;i<a.length();i++){
    arr[(a[i])]++;
  }
  for(int i=0;i<b.length();i++){
    arr[(b[i])]--;
  }
  bool flag = false;
  for(int i=0;i<250;i++) {
    if(arr[i] == 0){}
    else{
      flag = true;
      break;
    }
  }
  return !flag;
}
int main(){
  string a = "allergic";
  string b = "allergiy";

  cout << isAnagram(a, b) << endl;
  return 0;
}