// Implement stack using array
#include<bits/stdc++.h>
using namespace std;

// struct define
struct Stack{
  int top;
  unsigned capacity;
  // pointer to an array
  int* array;
};

// createStack
struct Stack* createStack(unsigned capacity){
  struct Stack* stackPt = (struct Stack*)malloc(sizeof(struct Stack));
  stackPt->capacity = capacity;
  stackPt->top = -1;
  stackPt->array = (int*)malloc(capacity * sizeof(int));
  return stackPt;
}

// isFull
int isFull(struct Stack* stackPt){
  if(stackPt->top == stackPt->capacity-1){
    return 1;
  }
  return 0;
}

// isEmpty
int isEmpty(struct Stack* stackPt){
  if(stackPt->top == -1 ){
    return 1;
  }
  return 0;
}

// push
void push(struct Stack* stackPt, int item){
  if(stackPt-> top == stackPt->capacity-1){
    return;
  }
  stackPt->top++;
  stackPt->array[stackPt->top] = item;
}

// pop
int pop(struct Stack* stackPt){
  if(stackPt->top == -1) return;
  int item = stackPt->array[stackPt->top];
  stackPt->top--;
  return item;
}

int main(){
  
}