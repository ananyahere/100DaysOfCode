#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

void print(Node *head){
      // cout<<"head pointing at: "<<head->data<<" ";
      Node* tmp = head;
      while(tmp!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
}

void insert_start(Node **head_ref, int item){
    Node* new_node = new Node();
    new_node->data = item;
    if(*head_ref == NULL){
      // empty list
      *head_ref = new_node;
      new_node->next = NULL;
      // cout<<"added."<<" ";
    }
    else{
      new_node->next = *head_ref;
      *head_ref = new_node;
      // cout<<"added."<<" ";
    }
    return;
}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert_start(&head, arr[i]);

  }
  print(head);
}