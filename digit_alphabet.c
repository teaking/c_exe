#include <stdio.h>

int main(){
  int number,right_digit;
  printf("Provide the number:");
  scanf("%i",&number);


  do{
    right_digit = number % 10;
    number = number / 10;
    printf("right_digit %i.\n",right_digit);
  }while(number != 0);
   return 0;
}
