//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.


#include<bits/stdc++.h>
using namespace std;

double main(){
  vector<int> arr{1,2,3,4};
  int n=5;

   // sort the vector
  sort(arr.begin(), arr.end());

  double sum = 0;

  for(int i=1; i<arr.size(); i++){
    sum = sum + arr[i];
  }

  double sum2 = n*(n-1)/2;
  return (sum2 - sum);
}