// You are given a string S, the task is to reverse the string using stack.

#include<bits/stdc++.h>
using namespace std;

// stack is of size 10
#define n 10

class Stack{
  int top;
  char* arr;

  public: 
    Stack(){
      top = -1;
      arr = new char[n];
    } 

    void push(char ch){
      if(top == n-1){
        // overflow
        cout<<"overflow"<<endl;
        return;
      }
      top++;
      arr[top] = ch;
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
  // input char arr is of size 7
  char arr[7] = "Ananya";
  int i = 0;
  while(arr[i] != '\0'){
    st.push(arr[i]);
    i++;
  }
  st.print();
}

