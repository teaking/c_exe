#include <stdio.h>
int main(){
  printf("Test two number to determine if the first is evenly divisible by the second and then display the appropriate message at terminal.\n");

  printf("\nEvenly divisible meaning that no remainder.");
  int val1, val2;

  printf("Provide two numbers:");
  scanf("%i %i", &val1,&val2);
  _Bool evenlyDivided = (((val1 % val2) == 0) ? 1 : 0);
  if(evenlyDivided){
    printf("Evenly divisible.\n");
  }else{
    printf("not evenly divisible.\n");
  }
  return 0;
}
