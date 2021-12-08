//Given an array arr[] of N positive integers. Push all the zero’s of the given array to the right end of the array while maitaining the order of non-zero elements.
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0};
  int len = sizeof(arr)/sizeof(arr[0]);
  int zero_count = 0;
  int one_count = 0;
  for(int i=0; i<len; i++){
    if(arr[i] == 0){
      zero_count++;
    }
    else{
      one_count++;
    }
  }
  for(int i=0; i<zero_count; i++){
    arr[i] = 0;
  }
  for(int j=zero_count; j<len; j++){
    arr[j] = 1;
  }

  for(int m=0; m<len; m++){
    cout<<arr[m]<<" ";
  }
}