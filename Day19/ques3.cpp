//Design a Data Structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. All these operations of SpecialStack must be O(1). To implement SpecialStack, you should only use standard Stack data structure and no other data structure like arrays, list, . etc

#include<bits/stdc++.h>
using namespace std;

#define N 100

// regular stack with pop & push functions
class Stack{
  int size;
  int* arr;
  int top;

  public: 

    Stack(){
      top = -1;
      size = N;
      arr = new int[N];
    }

    void push(int x){
      if(top == size-1){
        // regular stack is full
        cout<<"overflow in regular stack"<<endl;
        return;
      }
      top++;
      arr[top] = x;
    }

    int pop(){
      if(top == -1){
        // empty regular stack
        cout<<"underflow in regular stack"<<endl;
        return -5;
      }
      int y = arr[top];
      top--;
      return y;
    }

   bool isEmpty(){
     if(top == -1){
       return true;
     }
     return false;
   }
};

class SpecialStack{
  int size;
  int* arr;
  int specialTop;

  public:
    SpecialStack(int n){
      specialTop = -1;
      size = n;
      arr = new int[n];
    }

    Stack regSt;

    int specialPop(){
      if(specialTop == -1){
        // special stack is empty
        cout<<"underflow in special stack"<<endl;
        return -5;
      }
      int y = arr[specialTop];
      specialTop--;
      return y;
    }

    void specialPush(int x){
      if(specialTop == size-1){
        // special stack is full
        cout<<"special stack is full"<<endl;
        return;
      }
      if(arr[specialTop] > x || specialTop == -1){
        specialTop++;
        arr[specialTop] = x;
        return;
      }
      else if(arr[specialTop] < x){

        // pop out all the items which are greater than x & store them in regular stack
        while(arr[specialTop]<x){
          // cout<<"to regular stack: "<<arr[specialTop]<<endl;
          int oldTopPos = arr[specialTop];
          specialTop--;
          regSt.push(oldTopPos);
        }

        // add x to the special stack
        specialTop++;
        arr[specialTop] = x;

        // pop elements from regular stack and push them into Special stack
        while(!regSt.isEmpty()){
          int item = regSt.pop();
          specialTop++;
          arr[specialTop] = item;
        }
      }
    }

    void print(){
      int tp = specialTop;
      while(tp>=0){
        cout<<arr[tp]<<" ";
        tp--;
      }
    }

};


int main(){
  SpecialStack ss(10);
  int arr[6] = {3,22,9,8,20,23};
  for(int i=0; i<6; i++){
    ss.specialPush(arr[i]);
  }
  ss.print();
}

// ss.specialpop() is ss.getMin()

// elements in stack are increasing order