//Given a stack S and an integer N, the task is to insert N at the bottom of the stack.

#include<bits/stdc++.h>
using namespace std;

#define n 10

class Stack{
  int top;
  int* arr;

  public:
    Stack(){
      top = -1;
      arr = new int[n];
    }

    int push(int item){
      if(top == -1){
        // empty
        top++;
        arr[top] = item;
      }
      else if(top == n-1){
        // stack is full
        cout<<"stack is full"<<endl;
        return -1;
      }
      else{
        // non-empty
        top++;
        arr[top] = item;
      }
    }

    int pop(){
      if(top == -1){
        // underfloe
        cout<<"underflow"<<endl;
        return -1000;
      }
      int y = arr[top];
      top--;
      return y;
    }


    void print(){
      int tp = top;
      while(tp>=0){
        cout<<arr[tp]<<" ";
        tp--;
      }
    }

    bool isFull(){
       if(top == n-1){
         return true;
       }
       else false;
    }

    void push_back(Stack st, int x){
      while(st.isFull()){
        st.push(44);
      }
    }
};

int main(){
  int arr[5] = {1,2,3,4,5};
  Stack* stackpt = NULL;
  Stack st;
  for(int i=0; i<5; i++){
    st.push(arr[i]);
  }  
  stackpt = &st;
  int x = 1;
  st.push_back(st, x);
  st.print();
}