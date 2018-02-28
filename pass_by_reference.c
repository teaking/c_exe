#include <stdio.h>
void test(int *ptr1, int *ptr2)
{
 *ptr1 = 10;
  *ptr2 = 12;
  
}
int main()
{
  int i = 1, j = 2;
  printf("%d, %d\n", i, j);
  test(&i , &j);
  printf("%d, %d\n", i, j);
}
