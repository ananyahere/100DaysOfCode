//Add One to a number represented as a Linked List

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

void reverse_ll(Node** head_ref){
  Node* head = *head_ref;
  Node* tmp = head;
  Node* prev = NULL;
  Node* frwd = NULL;
  while(tmp!=NULL){
    // update frwd
    frwd = tmp->next;
    // change link
    tmp->next = prev;
    // update prev & tmp
    prev = tmp;
    tmp = frwd;
  }
  *head_ref = prev;
}

void addOne(Node** head_ref){
  Node* head = *head_ref;
  Node* tmp = head;
  if(head->data<9){
    cout<<"head->data<9\n";
    head->data++;
    return;
  }
  Node* prev = NULL;
  int carry = 1;
  int sum = 0;
  while(tmp!=NULL){ 
    sum = tmp->data + carry; 
    if(sum>9){
      carry = 1;
    }
    sum = sum%10;
    tmp->data = sum;
    // update prev
    prev = tmp;    
    // update tmp
    tmp=tmp->next;
  }
  // if the right-most num = 9
  if(prev->data == 0){
    Node* new_node = new Node();
    new_node->data = carry;
    new_node->next = NULL;
    prev->next = new_node;
  }
}

int main(){
  int arr[2] = {9,9};
  Node* head = NULL;
  for(int i=0; i<2; i++){
    insert(&head, arr[i]);
  }
  reverse_ll(&head);
  addOne(&head);
  reverse_ll(&head);
  print(head);
}