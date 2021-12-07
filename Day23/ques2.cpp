//Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N
// time complexity => O(nlogn)

#include<bits/stdc++.h>
using namespace std;

void binary_search(vector<int> arr, int item){
  
}

int main(){
  vector <int> arr{5, 20, 3, 2, 5, 80};
  int N = 78;
  // merge sort the arr
  sort(arr.begin(), arr.end());

  // loop over arr 
  for(int i=0; i<arr.size(); i++){
    // find the diff
    int diff = N-arr[i];
    // binary search the diff

      // if found? stop    
  }


  cout<<"no pair found";
}