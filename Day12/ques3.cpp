//Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

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


int main(){
    Node* head = NULL;
  int arr[5] = {1,2,3,4};
  for(int j=0; j<4; j++){
    insert(&head, arr[j]);
  }
    int count = 0;
  Node* tmp0 = head;
  while(tmp0!=NULL){
    count++;
    tmp0 = tmp0->next;
  }
  cout<<count;
}