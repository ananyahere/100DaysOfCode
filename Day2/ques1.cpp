//Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str="bdca";
  char intArr[str.size()];
  for(int i=0; i<str.size(); i++){
    intArr[i] = str[i];
  }
  int n = sizeof(intArr) / sizeof(intArr[0]);
  int m = str.size();
  // sort the intArr
  sort(intArr, intArr+n);
  string new_str="";
  for(int i=0; i<str.size(); i++){
    new_str = new_str + intArr[i];
  }
  for(int i = 0; i<new_str.size(); i++){
    cout<<new_str[i];
  }
}
