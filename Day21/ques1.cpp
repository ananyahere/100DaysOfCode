// infix to postfix

#include<bits/stdc++.h>
using namespace std;

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
    if(top== n-1){
      // overflow
      cout<<"overflow"<<endl;
      return;
    }
    top++;
    arr[top] = ch;
  }

  void pop(){
    if(top == -1){
      // underflow
      cout<<"underflow"<<endl;
      return;
    }
    top--;
  }
 
  char topFunc(){
    if(top == -1){
      return '@';
    }
    return arr[top];
  }

  bool isEmpty(){
    if(top == -1){
      return true;
    }
    return false;
  }
};

int pref(char ch){
  if(ch == '+' || ch == '-'){
    return 1;
  }
  else if(ch == '/' || ch == '*'){
    return 2;
  }
  else if(ch == '^'){
    return 3;
  }
}

string infix_to_postfix(string infix){
  Stack st;
  string result ="";

  for (int i=0; i<infix.length(); i++){
    // if operand, output it
    if(('a'<=infix[i] && infix[i]<='b') || ('A' <= infix[i] && infix[i] <= 'B') || ('0'<=infix[i] && infix[i]<= '9')){
      result = result+infix[i];
    }


    else if(infix[i] == '('){
      // push to stack
      st.push(infix[i]);
    }


    else if(infix[i] == ')'){
      // pop & output untill we discover '('
      while(st.topFunc()!='(' && !st.isEmpty()){
        char ch = st.topFunc();
        st.pop();
        result = result + ch;
      }
      // discard both parenthesis
      if(!st.isEmpty()){
      st.pop();
      }
    }

    else{
      while(pref(infix[i]) <= pref(st.topFunc()) && !st.isEmpty()){
        result = result + st.topFunc();
        st.pop();
      }
      st.push(infix[i]);
    }

  }
  // pop all the remaining elements
  while(!st.isEmpty()) {
      result += st.topFunc();
      st.pop();
  }
  return result;
}



int main(){
  string s = "a+b*(c^d-e)^(f+g*h)-i";
  cout<<infix_to_postfix(s);
  
}