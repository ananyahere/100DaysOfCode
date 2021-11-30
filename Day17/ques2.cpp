// circular Linked List - delete from the beginning

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

void delete_from_start(Node** head_ref){
  Node* head = *head_ref;
  Node* tmpStart = *head_ref;
  Node* tmpEnd = head;
  do{
    tmpEnd = tmpEnd->next;
  }while(tmpEnd->next!=head);
  // update pointer of last node
  tmpEnd -> next = (*head_ref)->next;
  // update head-pointer
  *head_ref = (*head_ref)->next;
  tmpStart->next = NULL;

}

int main(){
  Node* head = NULL;
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    insert_at_end(&head, arr[i]);
  }
  delete_from_start(&head);
  print_cll(head);
}