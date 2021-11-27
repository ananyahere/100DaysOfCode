//Write a function to delete a Linked List

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

void delete_LL(Node** head_ref){
  Node* tmp = *head_ref;
  Node* prev = NULL;
  while(tmp!=NULL){
    //update prev & tmp
    prev=tmp;
    tmp=tmp->next;
    prev->next=NULL;
  }
  *head_ref=NULL;
}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert(&head, arr[i]);
  }
  delete_LL(&head);
  print(head);

}