#include <stdio.h>

int main(){
  int a , b, arithmetic;
  printf("Provide the arithmetic");
  scanf("%d%d", &a,&b);
  arithmetic = a - b;
  printf("\nThe answer is %d.\n",arithmetic);
  return 0;
}


// 1 <= b
//b < a
//a <= 10000
