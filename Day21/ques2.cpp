// infix to prefix

#include<bits/stdc++.h>
using namespace std;

#define n 100

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

string infix_to_prefix(string s){
  string res = "";
  Stack st;
  // reverse the string
  string rev_s = "";
  for(int i=0; i<s.length(); i++){
    st.push(s[i]);  
  }
  while(!st.isEmpty()){
    rev_s = rev_s + st.topFunc();
    st.pop();
  }

  for(int i=0; i<rev_s.length(); i++){

    // if scanned ch is operand
      if(('a'<=rev_s[i]&&'z'>=rev_s[i]) || ('A'<=rev_s[i] && 'Z'>=rev_s[i]) || ('0'<=rev_s[i] && '9'>=rev_s[i])){
        res = res + rev_s[i];
      }
    
    // if scanned ch = '('
      else if(rev_s[i] == '('){
        while(st.topFunc()!=')'){
          res = res + st.topFunc();
          st.pop();
        }
        // discard ( & )
        if(!st.isEmpty()){
        st.pop();
        }
      }
    
    // if scanned ch = ')'
      else if(rev_s[i] == ')'){
        st.push(rev_s[i]);
      }
    
    
    else{

      // if st.top() == ')' simply push
      if(st.topFunc() == ')'){
        st.push(rev_s[i]);
      }

      else{
        // scanned ch have higher precendence
        if(pref(rev_s[i]) > pref(st.topFunc())){
          // simply push
          st.push(rev_s[i]);
        }
        // scanned ch have lower precenedence
        if(pref(rev_s[i]) < pref(st.topFunc())){
            while(pref(rev_s[i]) < pref(st.topFunc()) && !st.isEmpty()){
              res = res + st.topFunc();
              st.pop();
            }
            st.push(rev_s[i]);          
        }
        // scanned ch have equal precendence
        if(pref(rev_s[i]) == pref(st.topFunc())){
          // precendence is 3 (i.e. ch == '^')
          if(pref(rev_s[i]) == 3){
            // simply push
            st.push(rev_s[i]);
          }
          // precendence is NOT 3          
          else{
            // pop & output top of stack
            // push scanned ch            
            res = res + st.topFunc();
            st.pop();
            st.push(rev_s[i]);
          }
        }
      }
    }
  }

  // pop all the remaining elements
  while(!st.isEmpty()) {
      res = res+ st.topFunc();
      st.pop();
  }

  // reverse the res 
  string final_res="";
  for(int i=0; i<res.length(); i++){
    st.push(s[i]);  
  }
  while(!st.isEmpty()){
    final_res = final_res + st.topFunc();
    st.pop();
  }  


  return final_res;

}

int main(){
  string name="A*B+C/D";
  cout<<infix_to_prefix(name);
}