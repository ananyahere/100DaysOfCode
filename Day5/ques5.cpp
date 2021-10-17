//Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string str="i.like.this.program.very.much";
  // str[size] = '.';
  str = str + '.';
  int size = sizeof(str);
  cout<<str<<"\n";
  string rev_str="";
  string new_word= "";
  // rev_str.push_back(str[0]);
  for(int i=0; i<str.size(); i++){
    if(str[i] == '.'){
      rev_str.insert(0,new_word);
      rev_str.insert(0,".");
      new_word="";
    }
    else{
      new_word = new_word + str[i];
    }
  }
  rev_str.erase(rev_str.begin());
  cout<<rev_str;
}