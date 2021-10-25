//Given a linked list of N nodes. The task is to reverse this list.
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

// int main(){
//   Node* old_head = NULL;
//   int arr[] = {1,2,3,4,5};
//   for(int i=0 ; i<5; i++){
//     insert(&old_head, arr[i]);
//   }
//   // tmp_end points at end of the LL. old_head points at start of LL.  
//   Node* new_head = NULL;
//   Node* tmp_start=old_head;
//   while(tmp_start!=NULL){
//     tmp_start = tmp_start->next;
//   }
//   Node* tmp_end = tmp_start;
//   cout<<"tmp_end: "<<tmp_end->data<<" ";

//   // travel from old_head to tmp_end and at each step add new node after tmp_end & keep updating the new_head

//   Node* tmp = old_head;
//   while(tmp!=tmp_end){
//     int value = tmp->data;
//     Node* new_node= new Node();
//     new_node->data = value;
//     new_node->next = tmp_end->next;
//     tmp_end->next = new_node;
//     new_head = new_node;
//     cout<<"head: "<<new_head->data<<" ";
//   } 

//   // after completion of above loop, assign tmp_end->next = NULL

//   tmp_end->next = NULL;
//   print(new_head);

// }

// Method 2 - Better

int main(){
  Node* head = NULL;
  int arr[] = {1,2,3,4,5};
  for(int i=0 ; i<5; i++){
    insert(&head, arr[i]);
  }  

  // change thr direction of arrow/linker

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
  print(head);
}
