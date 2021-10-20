#include<bits/stdc++.h>
using namespace std;

void printVec (vector<int> v){
  cout<<"size: "<<v.size()<<"\n";
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

int main(){
  int N;
  cin>>N;
  vector<int> arrOfVect[N];  
  for(int i=0; i<N; i++){
    int size;
    cin>>size;
    vector<int> vect;
    for(int i=0; i<size; i++){
      int item;
      cin>>item;
      vect.push_back(item);
    }
    // push vector in array
    arrOfVect[i] = vect;
  }
  for(int i=0; i<N; i++){
    printVec(arrOfVect[i]);
    cout<<"\n";
  }
}