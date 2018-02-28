#include <stdio.h>

int main(){
  int dividend, remainder, divisor;
  float quotient;
  printf("provide the number to calculate");
  scanf("%d %d", &dividend,&divisor);
  printf("\nThe dividient %d.",dividend);
  remainder = dividend % divisor;
  printf("\nThe divisor to divide the dividend %d.",divisor);
  printf("\nThe remainder %d.",remainder);
  quotient = dividend / divisor;
  printf("\nThe quotient %.3f.",quotient);

  return 0;
}
