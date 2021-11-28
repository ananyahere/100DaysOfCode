//Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

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
      while(tmp!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
}

void addNums(Node **head_ref1, Node **head_ref2){
  Node* head1 = *head_ref1;
  Node* head2 = *head_ref2;
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  Node* prev = NULL;
  int carry = 0;
  int sum = 0;
  while(tmp2!=NULL){
    sum = tmp1->data+tmp2->data+carry;
    // update carry & sum
    carry = sum / 10;
    sum = sum%10;
    // update tmp2->data
    tmp2->data = sum;
    // update prev
    prev = tmp2;
    // update tmp2 & tmp1
    tmp1 = tmp1->next;
    tmp2 = tmp2->next;
  }
  if(prev->data >= 0){
    Node* new_node = new Node();
    new_node->data = carry;
    new_node-> next = NULL;
    prev->next = new_node;
  }
}

void reverse_ll(Node **head_ref){
  Node* tmp = *head_ref;
  Node* prev = NULL;
  Node* frwd = NULL;
  while(tmp!=NULL){
    // set frwd
    frwd = tmp->next;
    // change pointer
    tmp->next = prev;
    // update tmp & prev
    prev = tmp;
    tmp = frwd;
  }
  // tmp is NULL & prev point to last element
  *head_ref = prev;
}

int main(){
  int arr1[3] = {1,2,3};
  int arr2[3] = {9,8,7};
  Node* head1 = NULL;
  Node* head2 = NULL;
  for(int i=0; i<3; i++){
    insert(&head1, arr1[i]);
    insert(&head2, arr2[i]);
  }
  reverse_ll(&head1);
  reverse_ll(&head2);
  addNums(&head1, &head2);
  reverse_ll(&head2);
  print(head2);
}