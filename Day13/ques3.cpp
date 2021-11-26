//Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.


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

int length_LL(Node* head){
  int count = 0;
  Node* tmp = head;
  while(tmp != NULL){
    count++;
    tmp = tmp->next;
  }
  return count;
}

int getNthFromLast(Node* head, int index){
  int count = 0;
    Node* tmp = head;
  while(count!=index){
    count++;
    tmp = tmp->next;
  }
  return tmp->data;
}

int main(){
  Node* head = NULL;
  int N = 2;
  int arr[] = {1,2,3,4,5,6,7,8,9};
  for(int i = 0; i<9; i++){
    insert(&head, arr[i]);
  }
  int len = length_LL(head);
  int index = len-N;
  cout<< getNthFromLast(head, index);
}