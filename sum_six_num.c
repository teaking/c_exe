//using pointer to alter the data of the array
#include <stdio.h>

int main()
{
  int i, classes[6], sum=0;
  printf("Enter 6 numbers:\n");
  for (i=0; i < 6; i++) {
    //(classes+i) is equivalent to &classes[i]
    scanf("%d",classes+i);
    sum += *(classes + i);    
  }
  printf("Sum=%d\n",sum);
  return 0;
}