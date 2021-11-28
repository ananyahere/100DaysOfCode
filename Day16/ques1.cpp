//Given two lists sorted in increasing order, create a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
//Note: The list elements are not necessarily distinct.

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
        // cout<<"insert func empty list: "<<(*head_ref)->data<<endl;        
      }
      else{
        Node* tmp = *head_ref;
        while(tmp->next!=NULL){
          tmp=tmp->next;
        }
        tmp->next = new_node;
        // cout<<"insert func: "<<new_node->data<<endl;
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

void new_ll(Node* head1, Node* head2, Node** head3_ref){
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  while((tmp1 !=NULL) || (tmp2!=NULL)){
    if(tmp1 == NULL){
      // cout<<"tmp1 == NULL "<<tmp2->data<<endl;
      insert(head3_ref, tmp2->data);
      tmp2 = tmp2->next;
    }
    if(tmp2 == NULL){
      // cout<<"tmp2 == NULL "<<tmp1->data<<endl;      
      insert(head3_ref, tmp1->data);
      tmp1 = tmp1->next;
    }
    if(tmp1->data < tmp2->data){
      // cout<<"tmp1->data < tmp2->data "<<tmp1->data<<endl;      
      insert(head3_ref, tmp1->data);
      tmp1 = tmp1->next;
    }
    if(tmp1->data > tmp2->data){
      // cout<<"tmp1->data > tmp2->data "<<tmp2->data<<endl;      
      insert(head3_ref, tmp2->data);
      tmp2 = tmp2->next;
    }
    if(tmp1->data == tmp2->data){
      // cout<<"tmp1->data == tmp2->data "<<tmp2->data<<endl;      
      insert(head3_ref, tmp2->data);
      tmp2 = tmp2->next;
      tmp1 = tmp1->next;                  
    }
  }
}

int main(){
  int arr1[6] = {1,2,3,4,5,6};
  int arr2[4] = {2,4,6,8};
  Node* head1 = NULL;
  Node* head2 = NULL;
  Node* head3 = NULL;
  for(int i=0; i<6; i++){
    insert(&head1,arr1[i]);
  }
  for(int i=0; i<4; i++){
    insert(&head2,arr2[i]);
  }
  new_ll(head1, head2, &head3);
  print(head3);
}