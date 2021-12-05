//Prefix to Infix Conversion
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

string prefix_to_infix(string prefix){
  Stack st;
  for(int i=prefix.length(); i>=0; i--){

    if(('a'<=prefix[i] && 'z'>=prefix[i]) || ('A'<=prefix[i] && 'Z'>=prefix[i]) || ('0'<=prefix[i] && '9'>=prefix[i])){
      // convert char into string
        string str = "";
        str = str + prefix[i];
      // push string
        st.push(str);
    }

    else{
      string popped_first = st.pop();
      string popped_second = st.pop();
      string str_to_push = '(' + popped_first + prefix[i] + popped_second + ')';
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
  string prefix="*-A/BC-/AKL";
  cout<<prefix_to_infix(prefix);
}