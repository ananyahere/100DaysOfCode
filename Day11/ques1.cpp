//Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked list and check whether the length of linked list is even or odd.


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

int main(){
  int tc;
  cin>>tc;
  for(int i=0; i<tc; i++){
    Node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int j=0; j<6; j++){
      insert(&head, arr[j]);
    }
    int count = 0;
    Node* tmp = head;
    while(tmp!=NULL){
      tmp = tmp->next;
      count++;
    }
    cout<<"count: "<<count<<"\n";
    if(count%2 == 0){
      cout<<"even.0";
    }else{
      cout<<"old.1";
    }
  }
}