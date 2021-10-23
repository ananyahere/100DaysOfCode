#include <iostream>
int main(){
  int arr[] = {5, 10, 2, 95, 65, 78};
  //size
  int n = 6;
  for (int i = 0; i<n; i++){
    // to optimize 
    int flag = 0;
    for(int j=0; j<n-1; j++){
      if(arr[j+1]<arr[j]){
        //swap
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
        flag = 1;
      }
    }
    // no swap -> array is sorted
    if (flag == 0){
      break;
    }
    for(int m=0; m<n; m++){
      std::cout<<arr[m]<<" ";
    }
    std::cout<<"\n";
  }
}