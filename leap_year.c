#include <stdio.h>

int main(){
  int year, rem_4,rem_100,rem_400;
  printf("Enter the year to be tested: ");
  scanf("%i", &year);

  rem_4 = year % 4;
  rem_100 = year % 100;
  rem_400 = year % 400;

  if((rem_4 ==0 && rem_100 !=0) || rem_400 == 0){
    printf("It is leap year.\n");

  }
  else{
    printf("Nope, it is not leap year.\n");
  }
  return 0;
}
