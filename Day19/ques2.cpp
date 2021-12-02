//How to efficiently implement k stacks in a single array?

#include<bits/stdc++.h>
using namespace std;

class Stack{
  int size;
  int k;
  int* arr;
  int* top;

  public: 
    Stack(int n, int ka){
      arr = new int[n];
      size = n; // size = nk
      k = ka;
      int y = size/k; // y = nk/k = n
      top = new int[y];
      for(int i=0; i<(y); i++){
        top[i] = i*k - 1; 
      }
    }

    void push(int x, int sn){
      if(top[sn] == (sn+1)*k-1){
        // full
        cout<<"overflow for "<<x<<" at stack no. "<<sn<<endl;
      }else{
        top[sn]++;
        arr[top[sn]] = x;
      }
    }

    int pop(int sn){
      if(top[sn] == sn*k - 1){
        // empty
        cout<<"stack no. "<<sn<<"is empty"<<endl;
      }
      else{
        int z = arr[top[sn]];
        top[sn]--;
        return z;
      }
    }
};

int main(){
  Stack st(12, 3);
}