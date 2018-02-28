#include<stdio.h>

int main(){
  int var = 20;
  int *ip;

  ip = &var;

  printf("Address of the var variable:%p\n",&var);
  printf("Address stored in the ip: %p\n",ip);
  printf("value of the *ip variable:%d\n",*ip);

  return 0;


}
