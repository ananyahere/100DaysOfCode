// decimal to binary

#include<bits/stdc++.h>
using namespace std; 

int main(){
  int deci = 30;
  long long int bi=0;
  int i=0;
  int r=0;
  int power =0;
  while(deci!=0){
    r=deci%2;
    power = (int)(pow(10,i)+0.5);
    bi=bi + power*r;
    i=i+1;
    deci=deci/2;
  }
  cout<<bi;
}