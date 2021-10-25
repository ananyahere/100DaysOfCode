//Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

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

int main(){
  int arr[] = {1,2,1,2,1,3,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  Node* head = NULL;
  for(int i=0; i<size; i++){
    insert(&head, arr[i]);
  }
  int search_for=1;
  int count = 0;
  Node* tmp = head;
  while(tmp!=NULL){
    if(tmp->data == search_for){
      count++;
    }
    tmp = tmp->next;
  }
  cout<<count;
}