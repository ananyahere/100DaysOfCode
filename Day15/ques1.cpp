//Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).

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

void removeDuplicates(Node **head_ref){
  Node* tmp = *head_ref;
  Node* prev = NULL;
  while(tmp != NULL){
    if(prev !=NULL && prev->data == tmp->data){
      prev->next = tmp->next;
      Node* tmp2 = tmp;
      tmp = tmp->next;
      tmp2->next = NULL;
    }else{
      prev=tmp;
      tmp = tmp->next;
    }
  }

}


int main(){
  Node* head = NULL;
  int arr[] = {2,2,4,5};
  for(int i=0; i<4; i++){
    insert(&head, arr[i]);
  }
  removeDuplicates(&head);
  print(head);
}