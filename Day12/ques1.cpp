//Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

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
  int arr[5] = {1,2,3,4};
  for(int j=0; j<4; j++){
    insert(&head, arr[j]);
  }

  // get middle element 
  int count = 0;
  Node* tmp0 = head;
  while(tmp0!=NULL){
    count++;
    tmp0 = tmp0->next;
  }
     //for odd cases
  count = count/2;

  //get head2 to middle node
  Node* head2=head;
  for(int i=0; i<count; i++){
    head2 = head2->next;
  }

  //reverse the second half of LL
  Node* current = head2;
  Node* prev = NULL;
  Node* next = NULL;
  while(current!=NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head2 = prev;

  //compare
  Node* tmp1= head;
  Node* tmp2= head2;
  bool flag = true;
  while(tmp1!=NULL){
    if(tmp1->data != tmp2->data){
      flag = false;
      break;
    }
    tmp1=tmp1->next;
    tmp2=tmp2->next;
  }

  if(flag == false){
    cout<<"no.";
  }
  else if(flag == true){
    cout<<"yes.";
  }
}