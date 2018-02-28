//reverse array by swapping (without using additional memory)
#include <stdio.h>

int main()
{
  int arr_size;
  printf("Enter the size of an array.\n");
  scanf("%d",&arr_size);
  int arr[arr_size];
  for(int i=0;i<arr_size;i++){
    scanf("%d",arr+i);
  }
  int end = arr_size - 1;
  for (int c=0; c < arr_size/2; c++){
    //swapping first value to last and vice versa leading no
    //additional space required
    int t=arr[c];
    arr[c] = arr[end];
    arr[end] = t;
    end--;
    
  }
  printf("Reversed array elements are: \n");
  for(int i=0; i<arr_size; i++){
    printf("%d\n",arr[i]);
    
  }
  return 0;
}
