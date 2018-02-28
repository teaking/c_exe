//dynamically memory allocation using calloc() and free()
#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("Enter the number of elements.\n");
  int n = 0;
  scanf("%d", &n);
  int * ptr;
  ptr = (int *) calloc(n,sizeof(int));
  if(ptr == NULL){
    printf("ERROR! memory not allocated.\n");
    exit(0);
  }
  printf("Enter elements of array:\n");
  int sum = 0;
  for(int i=0;i<n;i++){
    printf("ptr %d address is at %p.\n", i, ptr + i);
    scanf("%d",ptr + i);
    sum += *(ptr + i);
  }
  printf("sum = %d.\n",sum);
  free(ptr);
  
}
