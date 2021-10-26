//Given an array of distinct elements. Find the third largest element in it.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  // sort arr
  sort(arr, arr+n);
  // return arr[n-3]
  cout<<arr[n-3];
}