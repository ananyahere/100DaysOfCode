//Given two numbers represented by two linked lists of size N and M. The task is to return a sum list

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
  Node* head = NULL;
  int arr1[3] = {3,4,5};
  int arr2[3] = {3,4,1};
  long int num1=0, num2=0;
  for(int i=0; i<3; i++){
    insert(&head, arr1[i]);
  }

}