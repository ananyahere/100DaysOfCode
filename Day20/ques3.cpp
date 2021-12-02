//Given a stack S and an integer N, the task is to insert N at the bottom of the stack.


#include<bits/stdc++.h>
using namespace std;

void push_to_back(stack<int> st, int x){
  if(st.empty()){
    st.push(x);
    return;
  }
  stack<int> temp;
  // while st is full/have elements
  while(!st.empty()){
    int popedItem = st.top();
    temp.push(popedItem);
    st.pop();
  }
  st.push(x);
  // while temp is full/have elements
  while(!temp.empty()){
    int popedItem = temp.top();
    st.push(popedItem);
    temp.pop();
  }

  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }  
}

int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  push_to_back(st, 44);
}