//Given a string S. The task is to convert characters of string to uppercase.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string old_str = "ABCddE";
  for(int i=0; i<old_str.size(); i++){
    if(97<=int(old_str[i]) && int(old_str[i])<=122){
      cout<<(old_str[i])<<" ";
      old_str[i] = (char)(int(old_str[i]) - (97 - 65 ));
    }
  }
  cout<<"\n";
  for(int j=0; j<old_str.size(); j++){
    cout<<old_str[j];
  }
}