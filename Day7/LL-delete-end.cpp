#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

void print(Node *head){
      Node* tmp = head;
      while(tmp!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
}

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

int delete_atEndIndex(Node **head_ref, int index){
  Node* tmp1 = *head_ref;
  int size = 0;
  while(tmp1 != NULL){
    size++;
    tmp1=tmp1->next;
  }
  index = size-index;
  int indx = 0;
  Node* tmp = *head_ref;
  Node* tmp_tail = NULL;
  while(indx!=index){
    tmp_tail = tmp;
    tmp = tmp->next;
    indx++;
  }
  int del = tmp->data;
  tmp_tail->next = tmp->next;
  tmp->next = NULL;
  return del;
}

int main(){
  Node* head = NULL;
      int arr[6] = {1,2,3,4,5,6};

    for(int i=0; i<6; i++){
      insert(&head, arr[i]);
    }
        cout<<"Before: \n";
        print(head);
    int del = delete_atEndIndex(&head, 2);
    cout<<"\ndel: "<<del<<"\n";
        cout<<"After: \n";
    print(head);
}