//Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<long long> a{1,2,5,4,0};
  vector<long long> b{2,4,5,0,1};
  int a_arr[a.size()];
  int b_arr[b.size()];
  for(int i=0; i<a.size(); i++){
    a_arr[i] = a[i];
    b_arr[i] = b[i];
  }
  sort(a_arr, a_arr+a.size());
  sort(b_arr, b_arr+b.size());
  for(int i=0; i<a.size(); i++){
    if (a_arr[i] != b_arr[i]){
      cout<<"not same";
      return 1;
    }
  }
  cout<<"same";
  return 0;
}