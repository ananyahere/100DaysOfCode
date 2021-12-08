// Sort an array of 0's 1's & 2's => Dutch Flag Nation

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int low = 0, mid=0;
  int high = n-1;
  while(mid<=high){
    if(arr[mid] == 0){
      // swap arr[low] & arr[mid]
      int tmp = arr[low];
      arr[low] = arr[mid];
      arr[mid] = tmp;
      // update mid & low
      mid++;
      low++;
    }else if(arr[mid] == 1){
      // update mid
      mid++;
    }else if(arr[mid] == 2){
      // swap arr[high] & arr[mid]
      int tmp = arr[high];
      arr[high] = arr[mid];
      arr[mid] = tmp;
      // update high
      high--;
    }
  }

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

}
