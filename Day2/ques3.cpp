//Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int index = 0;
  int k = 3;
  vector<int> mega_arr;
  vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < (9); i++)
  {
    for (int j = 0; j < k; j++)
    {
      // cout << arr[i][j] << "  ";
      // mega_arr[i] = (int)arr[i][j];
      mega_arr.push_back(arr[i][j]);
    }
    cout<<i;
  }
 
  for (int j = 0; j < k * k; j++)
  {
    cout << mega_arr[j] << " ";
  }

}