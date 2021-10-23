#include <iostream>
using namespace std;

int main()
{
  int arr[] = {99, 10, 45, 88, 33, 24, 94, 1, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int min, temp;
  for (int i = 0; i < n; i++)
  {
    min = i;
    // get index of min number
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      min = j;
    }
    // swap 
    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
  // print array
  for(int m = 0; m<n; m++){
    cout<<arr[m]<<" ";
  }
}