//Program to swap elements using call by reference
#include <stdio.h>

void cyclic_swap(int *a, int *b, int *c);

int main()
{
  int a, b, c;
  printf("Enter a, b and c respectively.\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("value before swapping: \n");
  printf("a = %d, b= %d, c =%d\n", a, b,c);
  cyclic_swap(&a,&b,&c);
  printf("value after swapping: \n");
  printf("a = %d, b= %d, c =%d\n", a, b,c);
}

void cyclic_swap(int *a, int *b, int *c)
{
  int temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
    
}
