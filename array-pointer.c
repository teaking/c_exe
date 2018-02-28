//Access Array Elements using pointer

#include <stdio.h>

int main()
{
  int data[5],i;
  printf("Enter elements: ");
  for(i =0; i < 5; i++)
    {
      scanf("%d",data+i);
    }
  printf("Entered: \n");
  for (int c =0; c < 5; c++)
    {
      printf("%d\n", *(data+c));
    }
  return 0;
}
