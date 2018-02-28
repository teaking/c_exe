#include <stdio.h>

int main(){
  int a = 10, b = 5;
  int * ip;
  ip = &a;
  printf("a = %d, ip = %p, *ip = %d\n", a, ip, *ip);
  *ip = 4;
  printf("a = %d, ip = %p, *ip =%d\n", a, ip, *ip);
  ip = &b;
  printf("b = %d, ip = %p, *ip = %d\n", b, ip, *ip);
  return 0;
}
