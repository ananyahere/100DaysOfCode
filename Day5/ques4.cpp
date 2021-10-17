// Given a number N, change all bits at even positions to 0.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n=10;
  long long int bi=0;
  int i=0;
  int r=0;
  int power =0;
  while(n!=0){
    r=n%2;
    power = (int)(pow(10,i)+0.5);
    bi=bi + power*r;
    i=i+1;
    n=n/2;
  }
  cout<<bi<<"\n";

  string bi_str = to_string(bi);
  for(int i=0; i<bi_str.size(); i++){
    if(i%2 == 0){
      bi_str[i] = '0';
    }
  }
  cout<<bi_str<<"\n";
    int deci=0;
  int size=bi_str.size();
  for(int i=size-1; i>=0; i--){
    int exp = (size-1-i);
    int power = (int)(pow(2,exp)+0.5);
    int to_num = bi_str[i] - '0';
    deci = deci + power*to_num;
  }
  cout<<deci;
}