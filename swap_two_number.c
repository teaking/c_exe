//swap two numbers using call by reference
#include <stdio.h>

void swap(int *val1, int *val2);

int main()
{
  int num1=5, num2=6;
  //address of num1 and num2 is passed to the swap func
  swap(&num1, &num2);
  printf("Num1 = %d\n",num1);
  printf("Num2 = %d\n", num2);
  return 0;
}

void swap(int *val1, int *val2)
{
  //pointer val1 and val2 points to the address of  num1 & num2
  *val1 = *val1 + *val2;
  *val2 = *val1 - *val2;
  *val1 = *val1 - *val2;
}
