// reverse LL
#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
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
  new_node ->data = item;
  if(*head_ref == NULL){
    //empty
    new_node->next = NULL;
    *head_ref = new_node;
  }else{
    //non-empty
    Node* tmp = *head_ref;
    while(tmp->next!=NULL){
      tmp = tmp ->next;
    }
    tmp->next = new_node;
  }
}

void reverse_LL(Node **head_ref){
  Node* head = *head_ref;
  Node* prev = NULL;
  Node* tmp = head;
  Node* frwd = NULL;
  while(tmp != NULL){
    //update frwd
    frwd = tmp->next;

    //change link
    tmp->next = prev;

    //update tmp & prev
    prev = tmp;
    tmp = frwd;
  }
  *head_ref = prev;
}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert_at_begin(&head, arr[i]);
  }
  reverse_LL(&head);
  print(head);
}