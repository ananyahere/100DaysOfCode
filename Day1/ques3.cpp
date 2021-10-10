//Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

#include<bits/stdc++.h>
using namespace std;

void swap(int* ap, int* bp){
  int tmp = *ap;
  *ap = *bp;
  *bp = tmp;
}

int main(){
  int k=3;
  int a[] = {1,2,3,4,5};
  int size_a = sizeof(a)/sizeof(a[0]);
  
  for(int i=0; i<size_a; i=i+k){

    // calculate size of mini_arr
    int first = i;
    int last = 0;
    if(i+k-1 > size_a-1){
      last = size_a - 1;
    }else{
      last = i+k-1;
    }
    int size_miniArr = last - first + 1;

    // reverse the mini-array 
    int l=i;
    int r=i+size_miniArr-1;
    for(int j=i; j<= i+size_miniArr-1; j++){
      // cout<<"value of j: "<<j<<" ";
      while(r>=l){
      swap(&a[r], &a[l]);
      l++;
      r--;
    }
    }
  }
  
  for(int m=0; m<size_a; m++){
    cout<<a[m]<<" ";
  }
}

