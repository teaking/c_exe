#include <stdio.h>

int main(int argc, char *argv[])
{
  int fibonacci [20], i;
  fibonacci [0] = 0;
  fibonacci [1] = 1;
  for (i = 2; i < 20; i++) {
    fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    
  }

  for (i = 0; i < 20; i++) {
    printf("Fibonacci number :%d.\n",fibonacci[i]);
  }
  printf("Size of fiboannci array is %ld.",sizeof(fibonacci));
  return 0;
}
