//Product of maximum in first array and minimum in second
#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[] = {5, 7, 9, 3, 6, 2};
  int b[] = {1, 2, 6, -1, 0, 9};
  int size_a = sizeof(a)/sizeof(a[0]);
  int size_b = sizeof(b)/sizeof(b[0]);
  long int max = -1*pow(10,8);
  long int min = pow(10,8);
  // for max
  for(int i=0; i<size_a; i++){
    if(a[i] > max){
      max = a[i];
    }
  }
  for(int j=0; j<size_b; j++){
    if(b[j] < min){
      min = b[j];
    }
  }
  cout<<"max: "<<max<<"\n"<<"min: "<<min;
}