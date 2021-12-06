// Kadane's Algorithm | Largest Sum Contiguous Subarray 

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr [6] = {5, -4, 6, -3, 4, -1};
  int current_sum = 0;
  int max_sum = 0;
  for(int i=0; i<6; i++){
    current_sum = current_sum + arr[i];
    if(current_sum > max_sum){
      max_sum = current_sum;
    }
    if(current_sum < 0){
      max_sum=0;
    }
  }
  // O(n)
  cout<<max_sum;
}