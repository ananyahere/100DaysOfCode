// queue implimentation => Array

#include<bits/stdc++.h>
using namespace std;

#define n 10

class Queue{
  int front;
  int back;
  int* arr;

  public: 
  Queue(){
    arr = new int[n];
    front = -1;
    back = -1;
  }
  
  void enqueue(int x){
    if(back == -1 && front == -1){
      back++;
      front++;
      arr[front] = x;
    }
    else if((back+1)%n == front){
      cout<<"overflow"<<endl;
      return;
    }
    else{
      back=(back+1)%n;
      arr[back]=x;
    }
  }

  int dequeue(){
    if(back == -1 && front == -1){
      // empty
      cout<<"underflow"<<endl;
      return -1;
    }
    else if(front ==0 && back == 0){
      int y = arr[front];
      front--;
      back--;
      return y;
    }
    else{
      int y = arr[front];
      front = (front+1)%n;
      return y;
    }

  }

  bool isFull(){
    if((back+1)%n == front){
      return true;
    }
    return false;
  }

  bool isEmpty(){
    if(back == -1 && front == -1){
      return true;
    }
    return false;
  }

  void print(){
    int fr = front;
    int bc = back;
    while(fr<=bc){
      cout<<arr[fr]<<" ";
      fr++;
    }
  }
};

int main(){
  Queue qu;
  int input_arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    qu.enqueue(input_arr[i]);
  }
}