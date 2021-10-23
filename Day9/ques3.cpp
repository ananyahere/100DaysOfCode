//Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.
//Note: The 2 numbers of a pair should be parts of different lists.

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


int main(){
  int count = 0;
  int sum = 15;
  Node* head1 = NULL;
  int arr1[] = {1,2,3,4,5,6};
  for(int i=0; i<6; i++){
    insert(&head1, arr1[i]);
  }
  Node* head2 = NULL;
  int arr2[] = {11,12,13};  
  for(int j=0; j<3; j++){
    insert(&head2, arr2[j]);
  }
  Node* tmp1=head1;
  while(tmp1!=NULL){
    int value = tmp1->data;
    // cout<<"value: "<<value<<"\n";
    int diff = sum -value;
    Node* tmp2=head2;
    while(tmp2!=NULL){
      if(diff == tmp2->data){
        // pair found
        cout<<"tmp2->data: "<<tmp2->data<<"\n";
        count++;
        break;
      }
      tmp2=tmp2->next;
    }
    tmp1=tmp1->next;
  }
  cout<<"count: "<<count;
}