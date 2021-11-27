//Move last element to front of a given Linked List

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

void insert(Node **head_ref, char item){
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


void print(Node *head){
      Node* tmp = head;
      while(tmp->next!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
      cout<<tmp->data<<" ";
}

void last_to_front(Node** head_ref){
  Node* head = *head_ref;
  Node* tmp = head;
  Node* tail = NULL;
  while(tmp->next!=NULL){
    tail = tmp;
    tmp = tmp->next;
  }
  tail->next = NULL;
  tmp->next = head;
  *head_ref = tmp;
}

int main(){
  Node* head = NULL;
  int arr[] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert(&head, arr[i]);
  }
  last_to_front(&head);
  print(head);
}