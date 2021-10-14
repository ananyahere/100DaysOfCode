//Given a string S, check if it is palindrome or not.

#include<bits/stdc++.h>
using namespace std;  

// METHOD 1
// int main(){
//   string input_str="abba";
//   string rev_str;
//   int n = input_str.size();
//   for(int i=n-1; i>=0; i--){
//     rev_str.push_back(input_str[i]);
//   }
//   if(rev_str == input_str){
//     cout<<"yes"<<endl;;
//   }else{
//     cout<<"no"<<endl;
//   }
// }

//METHOD 2
int main(){
  char s[] = "abba";
  int size = sizeof(s)/sizeof(s[0]);
  char rev_s[size];
  for(int i=0; i<size; i++){
    rev_s[i] = s[size-i-1];
  }
  for(int i=0; i<size; i++){
    cout<<rev_s[i];
  }
  cout<<"\n";
  // for(int i=0; i<size; i++){
  //  if(s[i] != rev_s[i]){
  //    cout<<"no";
  //    return 0;
  //  }
  // }
  // cout<<"yes";
  // return 1;
  bool result = strcmp(rev_s,s);
  if (result==0) cout<<"yes";
}