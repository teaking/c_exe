//pointer variable
#include<stdio.h>

int main()
{
  int a = 0;
  int * p;
  
  printf("Value of a: %d\n ", a);
  printf("Address value of a: %p\n", &a);
  
  printf("Address value of p: %p\n", p);
  p = &a;
  printf("After initalization Address value of p: %p\n", p);
  printf("Value of *p: %d\n",*p);
  
  return 0;
}
