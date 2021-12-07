//Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  int len = sizeof(arr)/sizeof(arr[0]);
  int i=0;
  int j=len-1;
  int sum1=0, sum2 =0;
  while(i<=len-1 || j>=0){
    sum1 = sum1+arr[i];
    // cout<<"sum1: "<<sum1<<endl;
    sum2= sum2+arr[j];
    // cout<<"sum2: "<<sum2<<endl;
    if(sum1 == sum2){
      cout<<i+1;
      break;
    }
    i++;
    j--;
  }
}