//Given a string S, the task is to create a string with the first letter of every word in the string.

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str="bad is good";
  string new_str="";
  new_str = new_str + str[0];
  for(int i=0; i<str.size(); i++){
    if(isspace(str[i])){
      // cout<<"this is space\n";
      new_str = new_str + str[i+1];
      // cout<<new_str[i+1]<<"\n";
    }
  }
  for(int i=0; i<new_str.size(); i++){
    cout<<new_str[i];
  }
}