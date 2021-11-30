// Your task is to implement  2 stacks in one array efficiently.

#include<bits/stdc++.h>
using namespace std;

// stack size = 10
#define n 10

class Stack{
  int top1;
  int top2;
  int* arr;

  public: 
  Stack(){
    top1 = -1;
    top2 = n/2 -1;
    arr = new int[n];
  }

  int pop1(){

  }

  int pop2(){

  }  

  void push1(int x){
    if(top1 == -1){
      // empty
    }
    else if( top1 == n/2 -1 ){

    }
  }

  void push2(int x){

  }  

  bool isEqual(){

  }

  void print(){

  }

};

