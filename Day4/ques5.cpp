//Given a string without spaces, the task is to remove duplicates from it.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string str = "gfg";
  string new_str="";
  for(int i=0; i<str.size(); i++){
    bool flag = true;
    for(int j=0; j<new_str.size(); j++){
      if(new_str[j] == str[i]){
        flag = false;
      }
    }
    if(flag == true){
      new_str = new_str + str[i];
    }
  }
  for(int m=0; m<new_str.size(); m++){
    cout<<new_str[m];
  }
}