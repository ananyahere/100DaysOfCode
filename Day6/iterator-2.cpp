#include<bits/stdc++.h>
using namespace std; 

int main(){
  vector<int> vect = {1,4,5,7,9,10,11};
  // range-based loop
  for(int value: vect){
    // copy
    cout<<value<<" ";
  }
  cout<<endl;  
  for(int &value: vect){
    // reference
    cout<<value<<" ";
  }
  cout<<endl;
  // auto => automatically determine data-type of variable
  auto a = 1.0;
  cout<<a;
  vector<int> ::iterator it = vect.begin();
  for(it = vect.begin(); it!=vect.end(); it++){
    cout<<(*it)<<" ";
  }
  cout<<endl;
  for(auto itp = vect.begin(); itp!=vect.end(); itp++){
    cout<<(*itp)<<" ";
  }
  cout<<endl;  
} 