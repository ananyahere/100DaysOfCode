//Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> v1{3, 4, 2, 2, 4};
  vector <int> v2{3, 2, 2, 7};
  vector<int> res;
  // sort the vector
  sort(v1.begin(), v1.end());  
  sort(v2.begin(), v2.end());   
  int i=0;
  int j=0;
  while(i<=v1.size() || j<=v2.size()){
    if(v1[i]<v2[j]){
      i++;
    }
    else if(v2[j]<v1[i]){
      j++;
    }
    else if(v1[i] == v2[j]){
      // add to array
      res.push_back(v1[i]);
      i++;
      j++;
    }
  }

  for(int j=0; j<res.size(); j++){
    cout<<res[j]<<" ";
  }
}