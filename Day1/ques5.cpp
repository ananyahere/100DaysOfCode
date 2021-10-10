//Given an array A of size N, print the reverse of it.
#include<bits/stdc++.h>
using namespace std;

void swap(int* ap, int* bp){
  int tmp = *ap;
  *ap = *bp;
  *bp = tmp;
}

int main(){
  int a[] = {2,3,4,8,11};
  int size = sizeof(a)/sizeof(a[0]);
  int l = 0;
  int r = size -1;
  // reverse array
  for(int i=0; i<size/2; i++){
    while(r>=l){
      swap(&a[r], &a[l]);
      l++;
      r--;
    }
  } 
  // print array
  for(int j=0; j<size; j++){
    cout<<a[j]<<" ";
  }
}