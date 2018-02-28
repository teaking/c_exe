//this program is running insertion sort
#include <stdio.h>
int print_value(int array[], int n);
int insertion_sort(int *array, int arr_size);
int main()
{
  printf("Enter what size array you required!\n");
  int arr_size;
  scanf("%d", &arr_size);

  int arr[arr_size];

  printf("Enter the %d value for the array\n",arr_size);
  for(int i = 0; i < arr_size; i++){
    scanf("%d", arr+i);
    
  }

  insertion_sort(arr,arr_size);
  print_value(arr,arr_size);
  return 0;
  
}

int print_value(int array[], int n){
  for(int i = 0; i < n; i++){
    printf("%d\n",array[i] );
  }
}

int insertion_sort(int * array, int arr_size
		   ){
  /*
   - take a value from array and compare it to 
    the previous ones 
   - if the value picked is lower than the value
    I already have I will change the position 
    of the value with the value that i already 
    have in my hand 

   */

  int key, j;
  for(int i =1; i < arr_size;i++){
    key = *(array + i);
    j = i-1;//get previous value to compare with the key
    while(j >= 0 && array[j] >  key ){
      array[j+1] = array[j];//compare the previous ones with the key to find the position for the key value
      j = j-1;//from right to left we comparing every elements unitl find a position for the key or until j 
      //value is bigger or equial to zero
    }
    array[j + 1] = key;
    
    
  }
}

