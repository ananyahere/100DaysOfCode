#include<bits/stdc++.h>
using namespace std;

void printVect(vector<pair<int,int>> &v){
  for(int i=0; i<v.size(); i++){
    cout<<"{ "<<v[i].first<<",";
    cout<<v[i].second<<" } ";
  }
  cout<<"\n";
}

int main(){
  // vector of pair
  vector <pair<int,int>> vectOfPair = {{1,2}, {3,6}, {5,7}};
  printVect(vectOfPair);
  vector <pair <int,int>> inpVectOfPair;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    int x,y;
    cin>>x>>y;
    inpVectOfPair.push_back({x,y});
  }
  printVect(inpVectOfPair);
}