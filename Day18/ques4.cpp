// queue => Array implimentation => FIFO

#include<bits/stdc++.h>
using namespace std;

// size of queue = 10
#define n 10

class Queue{
  int* arr;
  int front;
  int back;

  public: 
    Queue(){
      front = -1;
      back = -1;
      arr = new int[n];
    }
    
  void enqueue(int x){
    if(back == -1 && front == -1){
      // empty
      back++;
      front++;
      arr[front] = x;
    }
    else if(front == 0 && back == 0){
      // one element
      back++;
      arr[back] = x;
    }
    else if(back == n-1){
      // overflow
      cout<<"overflow"<<endl;
      return;
    }
    else{
      // non-empty
      back++;
      arr[back] = x;
    }
  }

  int dequeue(){
    if(back == -1 && front == -1){
      // empty
      cout<<"underflow"<<endl;
      return -1;
    }
    else if(back == 0 && front == 0){
      // one element
      front--;
      back--;
      return arr[front+1];
    }
    else{
      front++;
      return arr[front-1];
    }
  }

  int peek(){
    if(front == -1){
      cout<<"underflow"<<endl;
      return -1;
    }
    return arr[front];
  }

  void print(){
    int fr = front;
    int bc = back;
    while(fr <= bc){
      cout<<arr[fr]<<" ";
      fr++;
    }
  }
};


int main(){
  Queue qu;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    qu.enqueue(arr[i]);
  }
  qu.dequeue();
  qu.print();
  cout<<endl<<qu.peek();
}
