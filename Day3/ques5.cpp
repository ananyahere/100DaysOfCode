//Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str="GGGGGGR";
  int r_count=0;
  int g_count=0;
  for(int i=0; i<str.size(); i++){
    if(str[i] == 'R'){
      r_count++;
    }
    else{
      g_count++;
    }
  }
  cout<<r_count<<" ";
  cout<<g_count<<" ";
  int min_count = min(r_count, g_count);
  cout<<min_count;
}