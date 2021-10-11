#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int, string> p;
  // declaration
  p = make_pair(2, "abc");
  cout<<p.first<<" "<<p.second<<"\n";
  p = {2, "def"};
  cout<<p.first<<" "<<p.second<<"\n";

  // assignment/Copying
  pair<int, string> p1 = p;
  cout<<p1.first<<" "<<p1.second<<"\n";
  p1.first= 4;
  pair<int, string> &p2 = p;
  p2.second="ananya";
  cout<<p.first<<" "<<p.second<<"\n";

  // array of pairs
  cout<<"\narray of pairs\n";
  int a[] = {1,2,3};
  int b[] = {4,5,6};
  pair<int, int> pair_arr[3];
  for(int i=0; i<3; i++){
    pair_arr[i] = {a[i], b[i]};
  }
  for(int i=0; i<3; i++){
    cout<<pair_arr[i].first<< " " << pair_arr[i].second << "\n";
  } 
  for(int i=0; i<3; i++){
    pair_arr[i].first = pair_arr[i].first + 1;
  }
    for(int i=0; i<3; i++){
    cout<<pair_arr[i].first<< " " << pair_arr[i].second << "\n";
  } 
}