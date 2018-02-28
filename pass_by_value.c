#include <stdio.h>
//pass by value where the value does not change
int test(int a)
{
  a = 10;
  printf("Inside the test function the value of a is %d\n", a);
  return a;
}
int main()
{
  int a = 15;
  printf("%d\n", a);
  test(a);
  printf("%d\n",a);
}
