//Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string str_1="computer";
  string str_2="cat";
  string new_str="";
  for(int i=0; i<str_1.size(); i++){
    bool flag=true;
    for(int j=0; j<str_2.size(); j++){
      if(str_2[j] == str_1[i]){
        flag=false;
      }
    }
    if(flag==true){
      new_str=new_str+str_1[i];
    }
  }
  cout<<"\n";
  for(int m=0; m<new_str.size(); m++){
    cout<<new_str[m];
  }
}