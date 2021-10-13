//Given a string S as input. Delete the characters at odd indices of the string

#include<bits/stdc++.h>
using namespace std;

int main(){
  string old_str="GeeksforGeeks";
  string new_str="";
  for(int i=0; i<old_str.size(); i++){
    if(i%2 ==0){
      new_str = new_str + old_str[i];
    }
  }
  for(int j=0; j<new_str.size(); j++){
    cout<<new_str[j];
  }
}