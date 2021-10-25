// linked list into a number

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
  int arr[3] = {1,2,3};
  long int num = 0;
  Node* head = NULL;
  for(int i=0; i<3; i++){
    insert(&head, arr[i]);
  }
  // reverse the LL
  Node* current = head;
  Node* prev = NULL;
  Node* next = NULL;
  while(current!=NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }  
  head = prev;

  // get number
  Node* tmp = head;
  int indx=0;
  while(tmp!=NULL){
    int val = (int)(pow(10, indx) + 0.5);
    num = num + (tmp->data*val);
    indx++;
    tmp = tmp->next;
  }
  cout<<num;
}