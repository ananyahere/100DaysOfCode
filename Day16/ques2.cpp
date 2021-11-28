//Given a doubly linked list of n elements. The task is to reverse the doubly linked list.
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

void reverse_dll(Node** head_ref){
  Node* tmp = *head_ref;
  while(tmp->next!=NULL){
    tmp = tmp->next;
  }
  *head_ref = tmp;
}

int main(){
  int arr[5] = {1,2,3,4,5};
  Node* head = NULL;
  for(int i=0; i<5; i++){
   insert_at_end(&head, arr[i]);
  }
  reverse_dll(&head);
  print(head);
}