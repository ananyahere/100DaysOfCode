// pointer like structure
  // vectorName.begin() && vectorName.end()

#include<bits/stdc++.h>
using namespace std; 

int main(){
  vector <int> vect = {1,2,3,4,5,6};
  // declaration
  vector<int> ::iterator it;
  it = vect.begin();
  // access value iterartor is pointing to
  cout<<(*it)<<endl;
  cout<<(*(it+1))<<endl;  
  // it++ => move to next 'iterator'
  // it+1 => move to next location 
  for(it = vect.begin(); it != vect.end(); ++it){
    cout<<(*it)<<" ";
  }

  vector <pair <int,int>> vectOfpair = {{2,3}, {5,5}, {7,6}, {9,0}};
  cout<<"\n";
  vector<pair<int,int>> ::iterator itp = vectOfpair.begin();
  for(itp = vectOfpair.begin(); itp!=vectOfpair.end(); ++itp){
    cout<<(itp->first)<<" "<<(itp->second)<<"\n";
  }
}