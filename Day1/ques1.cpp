// You are given an integer N. You need to convert all zeroes of N to 5.
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 1004;
  string str = to_string(n);
  cout<<str<<"\n";
  cout<<typeid(str).name()<<"\n";
  for(int i=0; i<str.size(); i++){
    if(str[i] == '0'){
      str[i] = '5';
    }
  }
  n = stoi(str);
  cout<<n<<"\n";
  cout<<typeid(n).name()<<"\n";
}