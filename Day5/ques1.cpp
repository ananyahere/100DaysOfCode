//Given a street of N houses (a row of houses), each house having K amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.

#include<bits/stdc++.h>
using namespace std; 

int main(){
  int N = 7;
  int K = 10;
  int answer = N/2;
  if(N%2 == 0){
    cout<<answer*K;
  }
  else{
  cout<<(answer+1)*K;
  }
}