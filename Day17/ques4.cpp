//Exchange first and last nodes in Circular Linked List

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

void exchange(Node** head_ref){
  Node* head = *head_ref;
  Node* tmpStart = head;
  Node* tmpEnd = head;
  Node* prev = NULL;
  do{
    prev = tmpEnd;
    tmpEnd = tmpEnd->next;
  }while(tmpEnd->next!=head);
  // exchange
  tmpEnd ->next = tmpStart->next;
  prev->next = tmpStart;
  tmpStart->next = tmpEnd;
  *head_ref = tmpEnd;
}

int main(){
  int arr[5] = {1,2,3,4,5};
  Node* head = NULL;
  for(int i=0; i<5; i++){
    insert_at_end(&head, arr[i]);
  }
  // print_cll(head);
  exchange(&head);
  print_cll(head);
}