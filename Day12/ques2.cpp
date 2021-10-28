//Given a singly linked list of N nodes.
//The task is to find the middle of the linked list. For example, if the linked list is
//1-> 2->3->4->5, then the middle node of the list is 3.
//If there are two middle nodes(in case, when N is even), print the second middle element.
//For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

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
  int arr[] = {1,2,3,4,5,6};
  for(int i=0; i<6; i++){
    insert(&head, arr[i]);
  }
  int count = 0;
  Node* tmp = head;
  while(tmp!=NULL){
    count++;
    tmp = tmp->next;
  }
  cout<<count;
  if(count%2!=0){
    // odd
    count = count/2;
  }else{
    // even
    count = (count/2);
  }
  Node* tmp2 = head;
  for(int i=0; i<count; i++){
    tmp2 = tmp2->next;
  }
  cout<<"\n"<<tmp2->data;
}