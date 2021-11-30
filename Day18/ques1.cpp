// stack -> Array Implimentation => LIFO
// push() pop() top() isEmpty() && top

#include<bits/stdc++.h>
using namespace std;

#define n 5

class Stack{
  int* arr;
  int top;

  public: 
    Stack(){
      arr = new int[n];
      top = -1;
    }

    int peek(){
      if(top == -1){
        cout<<"stack is empty"<<endl;
        return -1;
      }
      return arr[top];
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

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }

    int pop(){
      if(top == -1){
        cout<<"stack is empty"<<endl;
        return -1;
      }
      top--;
      return arr[top+1];
    }

    void print(){
      int tmp = top;
      while(tmp>=0){
        cout<<arr[tmp]<<" ";
        tmp--;
      }
    }
};


int main(){
  Stack st;
  int input_arr[5]={1,2,3,4,5};
  for(int i=0; i<5; i++){
    st.push(input_arr[i]);
  }
  st.print();
  cout<<endl;  
  cout<<st.isEmpty()<<endl; 
  cout<<st.pop()<<endl;
  st.print();
  cout<<endl;
  cout<<st.peek()<<endl;
}

