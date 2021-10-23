//Given a Singly Linked List of size N, delete all alternate nodes of the list.

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

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

void print(Node *head){
      Node* tmp = head;
      while(tmp->next!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
      cout<<tmp->data<<" ";
}

int main(){
  Node* head = NULL;
  int arr[] = {99,59,42,20};
  for(int i=0; i<4; i++){
    insert(&head, arr[i]);
  }
  Node* tmp = head;
  Node* ahead = NULL;
  while(tmp!=NULL){
    ahead = tmp->next;
    tmp->next = tmp->next->next;
    ahead->next = NULL;
    tmp = tmp->next;
  }
  print(head);

}