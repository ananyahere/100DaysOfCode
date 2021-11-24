// Create Doubly Linked List => insert at the end

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
    Node* prev;
};

void insert_at_end(Node **head_ref, int item){
  Node* new_node = new Node();
  new_node->data = item;
  new_node->next = NULL;
  if(*head_ref == NULL){
    // empty 
    new_node->prev = NULL;
    *head_ref = new_node;
    // cout<<"empty: "<<(*head_ref)->data<<"\n";
  }
  else{
    // non-empty
    Node* tmp = *head_ref;
    while(tmp->next != NULL){
      tmp = tmp->next;
    }
    new_node->prev = tmp;    
    tmp->next = new_node;
 
  }
}

void print(Node* head){
  Node* tmp = head;
  while( tmp !=NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }
}


int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i =0; i<5; i++){
    insert_at_end(&head, arr[i]);
    
  }
  cout<<"print func"<<"\n";
  print(head);
}