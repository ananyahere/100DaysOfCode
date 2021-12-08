//Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
//1. Each student gets exactly one packet.
//2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

// O(nlogn) => time & O(1) => space

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr{3, 4, 1, 9, 56, 7, 9, 12};


  // sort the vector
  sort(arr.begin(), arr.end());
  
  int index = 0;
  int m = 5;
  int min_sum = INT16_MAX;
  for(int i=0; i<arr.size(); i++){
    int diff = arr[m-i+1] - arr[i];
    if(diff<min_sum){
      min_sum = diff;
      index = i;
    }
  }
  cout<<index<<endl;
  cout<<min_sum;
}