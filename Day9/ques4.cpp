//A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

void print(Node *head){
      Node* tmp = head;
      while(tmp->next!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
      cout<<tmp->data<<" ";
}

void insert(Node **head_ref, int item){
      Node* new_node = new Node();
      new_node->next = NULL;
      new_node->data = item;
      if(*head_ref == NULL){
        //empty list
        *head_ref = new_node;
      }
      else{
        Node* tmp = *head_ref;
        while(tmp->next!=NULL){
          tmp=tmp->next;
        }
        tmp->next = new_node;
      }
}

int main(){
  Node* head = NULL;
  int arr[3] = {3,4,9};
  for(int i=0; i<3; i++){
    insert(&head,arr[i]);
  }
  Node* tmp = head;
  Node* tail = NULL;
  while(tmp->next!=NULL){
    tail = tmp;
    tmp=tmp->next;
  }
  if(tmp->data == 9){
    tail->data = tail->data+1;
    tmp->data = 0;
  }else{
    tmp->data = tmp->data+1;
  }

  print(head); 
}