#include <stdio.h>

int main(){
  printf("Dividing and printing to three decimal accuracy.");
  float total,val1, val2;
  
  printf("\nEnter two number:\n");
  scanf("%f %f",&val1,&val2);

  total = val1 / val2;
  //have not taken account for divisible by 0 
  printf("\n%.3f\n",total);

  return 0;
}
