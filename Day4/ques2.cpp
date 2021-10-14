//Given a string, remove spaces from it.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string s = "    g f g";
  string new_s="";
  for(int i=0; i<s.size(); i++){
    if(!isspace(s[i])){
      new_s = new_s + s[i];
    }
  }
  for(int j=0; j<new_s.size(); j++){
    cout<<new_s[j];
  }
}