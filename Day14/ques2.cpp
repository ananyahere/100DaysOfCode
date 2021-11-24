// Create Doubly Linked List => insert at the begin
#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
    Node* prev;
};

void print(Node* head){
  Node* tmp = head;
  while( tmp !=NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }
}

void insert_at_begin(Node **head_ref, int item){
  Node* new_node = new Node();
  new_node->data = item;
  new_node->prev = NULL;
  if(*head_ref == NULL){
    // empty 
    new_node->next = NULL;
    *head_ref = new_node;
    // cout<<"empty: "<<(*head_ref)->data<<"\n";
  }else{
    Node* tmp = *head_ref;
    tmp->prev = new_node;
    new_node->next = tmp;
    *head_ref = new_node;
  }    
}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert_at_begin(&head, arr[i]);
  }
  print(head);
}