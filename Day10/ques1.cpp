//Given two string, represented as linked lists (every character is a node->data in the linked list). Write a function compare() that works similar to strcmp(), i.e., it returns 0 if both strings are same, 1 if first linked list is lexicographically greater, and -1 if second is lexicographically greater.

#include<bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
};

void print(Node *head){
      Node* tmp = head;
      while(tmp->next!= NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }
      cout<<tmp->data<<" ";
}

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
  int testCases;
  cin>>testCases;
  cout<<"tc: "<<testCases<<"\n";
  for(int i=0; i<testCases; i++){
    //input
    Node* head1 = NULL;
    Node* head2 = NULL;
    int size1;
    cin>>size1;
    cout<<"size1: "<<size1<<"\n";
    for(int j=0; j<size1; j++){
      char x;
      cin>>x;
      insert(&head1, x);
    }
    cout<<"string 1: \n";
    print(head1);
    int size2;
    cin>>size2;
    cout<<"size2: "<<size2<<"\n";    
    for(int i=0; i<size2; i++){
      char x;
      cin>>x;
      insert(&head2, x);
    }
    cout<<"string 2: \n";
    print(head2);    
    Node* tmp1= head1;
    Node* tmp2=head2;
    //compare-logic
    while(tmp1!=NULL && tmp2!=NULL && tmp1->data==tmp2->data)
    {
      tmp1= tmp1->next;
      tmp2=tmp2->next;
    }    
    if(tmp1!=NULL&&tmp2==NULL) // LL1.size>LL2.size
    {
      cout<<"1\n";
      return 1;
    }
    if(tmp2!=NULL&&tmp1==NULL) // LL2.size>LL1.size
    {
      cout<<"-1\n";
      return -1;      
    }
    if(tmp1!=NULL && tmp2!=NULL && tmp1->data>tmp2->data)
    {
      cout<<"1\n";
      return 1;      
    }
    if(tmp1!=NULL && tmp2!=NULL && tmp1->data<tmp2->data)
    {
      cout<<"-1\n";
      return -1;       
    }
    cout<<"0\n";
    return 0;
  }
}