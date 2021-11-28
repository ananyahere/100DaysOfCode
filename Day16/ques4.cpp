// Circular Linked List -> insert at the beginning

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

void print_cll(Node* head){
  if(head == NULL){
    return;
  }
  else{
    Node* tmp = head;
    do{
      cout<<tmp->data<<endl;
      tmp = tmp->next;
    }while(tmp!=head);
  }
}

void insert_at_begin(Node** head_ref, int item){
  Node* new_node = new Node();
  new_node ->data = item;
  Node* head = *head_ref;
  if(head == NULL){
    *head_ref = new_node;
    new_node->next = new_node;
  }else{
    Node* tmp = head;
    do{
      tmp=tmp->next;
    }while(tmp->next!=head);
    tmp->next = new_node;
    new_node->next = *head_ref;
    *head_ref = new_node;
  }
}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i =0; i<5; i++){
    insert_at_begin(&head, arr[i]);
  }
  print_cll(head);
}