// Your task is to implement  2 stacks in one array efficiently.

#include<bits/stdc++.h>
using namespace std;

// stack size = n
#define n 5

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
    if(top1 == -1){
      // empty
      return -1;
    }
    return arr[top1];
  }

  int pop2(){
    if(top2 == n/2 -1){
      // empty
      return -1;
    }
    return arr[top2];
  }  

  void push1(int x){
    if(top1 == -1){
      // empty
      top1++;
      arr[top1] = x;
    }
    else if( top1 == n/2 -1 ){
      // full
      cout<<"overflow stack 1 "<<x<<endl;
      return;
    }else{
      top1++;
      arr[top1] = x;
    }
  }

  void push2(int x){
    if(top2 == n/2 -1){
      // empty
      top2++;
      arr[top2] = x;      
    }else if( top2 == n-1){
      // full
      cout<<"overflow stack 2=> "<<x<<endl;
      return;      
    }
    else{
      top2++;
      arr[top2] = x;
    }
  } 

};

int main(){
  Stack ts;
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << " : " << ts.pop1()
         << endl;
    ts.push2(40);
    cout << "\nPopped element from stack2 is "
         << ": " << ts.pop2()
         << endl;
    return 0;  
}

