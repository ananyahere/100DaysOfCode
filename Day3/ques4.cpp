//Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

#include<bits/stdc++.h>
using namespace std;

int main(){
  string old_str = "Abcd";
  if (97<=int(old_str[0]) && int(old_str[0])<=122){
    cout<<"convert all to lowercase\n";
    // convert all to lowercase
    for(int i=0; i<old_str.size(); i++){
      if(65<=int(old_str[i]) && int(old_str[i])<=90)
        //uppercase to lowercase
        old_str[i] = (char)(int(old_str[i]) + (97 - 65 ));
    }
  }
  else if(65<=int(old_str[0]) && int(old_str[0])<=90){
    cout<<"convert all to uppercase\n";
    // convert all to uppercase
    for(int i=0; i<old_str.size(); i++){
      if(97<=int(old_str[i]) && int(old_str[i])<=122){
        //lowercase to uppercase
        old_str[i] = (char)(int(old_str[i]) - (97 - 65 ));
      }
    }    
  }

  for(int i=0; i<old_str.size(); i++){
    cout<<old_str[i];
  }
}