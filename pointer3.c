//learning pointer
#include<stdio.h>

int main(){
  int n = 100;
  int * ptr;
  printf("n value is %d.\n", n);
  printf("n address is %p.\n",&n);
  printf(" ptr address is %p.\n", ptr);
  printf(" ptr value is %d.\n", *ptr);
  printf(" n + i address value: %d\n", *(&n +1));
  *ptr = n;
  printf("ptr value is change to vlaue of n.\n");
    printf(" ptr address is %p.\n", ptr);
  printf(" ptr value is %d.\n", *ptr);
  ptr = &n;
  printf("ptr is pointing at address of n.\n");
    printf(" ptr address is %p.\n", ptr);
  printf(" ptr value is %d.\n", *ptr);
  return 0;
}
