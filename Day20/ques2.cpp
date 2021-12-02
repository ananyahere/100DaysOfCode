//Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
//Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
//If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int input_arr[5] = {6,8,0,1,3};
  int size = sizeof(input_arr)/sizeof(input_arr[0]);
  int* output_arr = new int[size];

  for(int i=0; i<size; i++){

    // for the last element (no element to the left)
    if(i == size -1){
      output_arr[i] = -1;
    }

    // if the element directly next to input_arr[i] is greater => add to output_arr
    else if(input_arr[i+1]>input_arr[i]){
      output_arr[i] = input_arr[i+1];
    }

    else{

      stack<int> st;
      // add one element so that stack isn't empty
      st.push(input_arr[i+1]);
      int counter = i+2;
      // now add the remaining element is stack in increasing order 
      while(counter<=size-1){
        // if already present element (in stack) is greater than input_arr[counter] => remove it & add after input_arr[counter] has been added
        if(input_arr[counter] < st.top()){
          int popedInt = st.top();
          st.pop();
          st.push(input_arr[counter]);
          st.push(popedInt);
        }
        // when present element in thr stack is smaller 
        else{
          st.push(input_arr[counter]);
        }

        counter++;
      }
      // now stack is arranged in increasing order & just compare input_arr[i] with top element of stack(which is greatest among them)
      if(st.top()>input_arr[i]){
        output_arr[i] = st.top();
      }   
      else{
        output_arr[i] = -1;
      }
    }
  }
  for(int j=0; j<5; j++){
    cout<<output_arr[j]<<" ";
  }
  return 0;
}