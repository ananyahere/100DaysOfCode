//Postfix to Infix Conversion

#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
  int top;
  string* arr;

  public:
  Stack(){
    top = -1;
    arr = new string[n];
  }

  string pop(){
    if(top == -1){
      cout<<"underflow"<<endl;
    }
    string str = arr[top];
    top--;
    return str;
  }

  void push(string c){
    if(top == n-1){
      cout<<"overflow"<<endl;
    }
    top++;
    arr[top] = c;
  }

  bool isEmpty(){
    if(top == -1){
      return true;
    }
    return false;
  }

  string topfunc(){
    return arr[top];
  }
};

bool isOperator(char c){
  if(c =='*' || c=='^' || c=='+' || c=='-' || c=='/'){
    return true;
  }
  return false;
}


string postfix_to_infix(string postfix){
  Stack st;
  for(int i=0; i<postfix.length(); i++){

    if(('a'<=postfix[i] && 'z'>=postfix[i]) || ('A'<=postfix[i] && 'Z'>=postfix[i]) || ('0'<=postfix[i] && '9'>=postfix[i])){
      // convert char into string
        string str = "";
        str = str + postfix[i];
      // push string
        st.push(str);
    }

    else{
      string popped_first = st.pop();
      string popped_second = st.pop();
      string str_to_push = '(' + popped_second + postfix[i] + popped_first + ')';
      st.push(str_to_push);
    }
  }
  string res = "";

  while(!st.isEmpty()){
    res = res + st.topfunc();
    st.pop();
  }
  return res;
}

int main(){
  string postfix = "AB+CD-*";
  cout<<postfix_to_infix(postfix)<<endl;
}