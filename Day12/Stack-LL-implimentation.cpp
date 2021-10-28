#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

int main(){}


void push(Node** head_ref, int item){
//insert at the beginning
  Node* tmp = *head_ref;
  Node* new_node = new Node();
  new_node->data = item;
  new_node->next = NULL;
  if(tmp == NULL){
    //empty
    *head_ref = new_node;

  }else{
    new_node->next = tmp;
    *head_ref = new_node;
  }
}

int pop(Node** head_ref){
  Node* tmp = *head_ref;
  int value = tmp->data;
  *head_ref = (*head_ref)->next;
  tmp->next = NULL;
  delete tmp;
  return value;
}

bool isEmpty(Node* head){
  if(head == NULL){
    return true;
  }
  return false;
}

int peek(Node* head){
  return head->data;
}

bool isFull(){
  return false;
}