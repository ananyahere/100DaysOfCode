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
  vector <vector<int>> vectOfvect;
  for(int i=0; i<N; i++){
    int n;
    cin>>n;
    vector <int> vect;
    for(int j=0; j<n; j++){
      int item;
      cin>>item;
      vect.push_back(item);
    }
    // push vectors to vector
    vectOfvect.push_back(vect);
  }
  for(int m=0; m<vectOfvect.size(); m++){
    printVec(vectOfvect[m]);
    cout<<"\n";
  }
}