// continous memory blocks; array with dynamic size
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
  cout<<"size of vector: "<<v.size()<<"\n"; //O(1)
  for(int i=0; i<v.size(); i++){
    cout<< v[i] << " ";
  }
  cout<<endl;
}

int main(){
  vector<int> v;
  int n; 
  cin>>n;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x); // O(1)
  }
  printVec(v);
  vector<int> v1(5,2);
  printVec(v1);
  v.pop_back(); // O(1)
  printVec(v);

  //Copying
  vector<int> v2 = v; // O(n)
  vector<int> &v3 = v; // O(n)
}
