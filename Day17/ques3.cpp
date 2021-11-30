// circular linked list -> count nodes

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

void insert_at_end(Node** head_ref, int item){
  Node* new_node = new Node();
  new_node -> data = item;
  if(*head_ref == NULL){
    // empty
    *head_ref = new_node;
    new_node->next = new_node;
  }else{
    Node* tmp = *head_ref;
    Node* head = *head_ref;
    do{
      tmp = tmp->next;
    }while(tmp->next!=head);
    // tmp at the end node
    tmp->next = new_node;
    new_node->next = *head_ref;
  }
}

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

int count(Node* head){
  Node* tmp =head;
  int count=1;
  do{
    count++;
    tmp=tmp->next;
  }while(tmp->next!=head);
  return count;
}

int main(){
  int arr[5] = {1,2,3,4,5};
  Node* head = NULL;
  for(int i=0; i<5; i++){
    insert_at_end(&head, arr[i]);
  }
  cout<<count(head);
}