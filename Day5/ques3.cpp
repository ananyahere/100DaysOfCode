// binary to decimal

#include<bits/stdc++.h>
using namespace std; 

int main(){
  string bi="101";
  int deci=0;
  int size=bi.size();
  for(int i=size-1; i>=0; i--){
    int exp = (size-1-i);
    int power = (int)(pow(2,exp)+0.5);
    int to_num = bi[i] - '0';
    deci = deci + power*to_num;
  }
  cout<<deci;
}