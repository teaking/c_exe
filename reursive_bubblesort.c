#include <stdio.h>
void bubbleSort(arr[], n){
  //base case
  if(n == 1)
    return;
  for (int i=0; i<n-1; i++){
    if(arr[i] > arr[i + 1])
      swap(arr[i], arr[i + 1]);
    
  }
  bubbleSort(arr, n -1);
}

void printArray
