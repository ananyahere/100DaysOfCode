//Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. The converted array should be in form a < b > c < d > e < f. The relative order of elements is same in the output i.e you have to iterate on the original array only


#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {4, 3, 7, 8, 6, 2, 1};
  int len = sizeof(arr)/ sizeof(arr[0]);
  for(int i=0; i<len-1; i++){
    if(i%2 == 0){
      if(arr[i] > arr[i+1]){
        // swap
        int tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
      }
    }
    else{
      if(arr[i] < arr[i+1]){
        // swap
        int tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;        
      }
    }
  }
  for(int j=0; j<len; j++){
    cout<<arr[j]<<" ";
  }
}