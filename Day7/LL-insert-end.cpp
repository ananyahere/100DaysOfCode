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
  head = new Node();
  Node* first = NULL;
  first = new Node();
  Node* second = NULL;
  second = new Node();

  head->data = 100;
  head->next = first;
  first->data = 200;
  first->next= second;
  second->data=300;

  int array[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert(&head, array[i]);
  }

  print(head);
}