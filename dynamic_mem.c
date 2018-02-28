//dynamically memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int number;
  printf("Enter number of elements:\n");
  scanf("%d", &number);
  int *ptr;
  ptr=(int *) malloc(number * sizeof(int));
  //memory allocated using malloc
  if(ptr == NULL){
    printf("Error! memory not allocated");
    exit(0);
  }
  int sum = 0;
  printf("Enter elements of array:\n");
    for( int i=0; i< number;i++){
      printf("ptr %d is at %p address.\n",i,ptr + i);
      scanf("%d",ptr + i);
      sum += *(ptr + i);
    }
   
  printf("sum = %d.\n",sum);
  free(ptr);
  //deallocation previously allocated space
  return 0;
}
