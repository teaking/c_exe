#include <stdio.h>

int main(){
  int val1, val2;
  printf("provide two number to swap:");
  scanf("%d %d",&val1,&val2);
  printf("\nFirst number: %d.",val1);
  printf("\nSecond number: %d.",val2);

  val2 = val1 + val2;
  val1 = val2 - val1;
  val2 = val2 - val1;

  printf("\nAfter swapping first number = %d.",val1);
  printf("\nAfter swapping second number = %d.\n",val2);

  return 0;
  
}
