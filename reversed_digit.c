#include <stdio.h>

int main(){
  int number, right_digit;

  printf("Enter the number:");
  scanf("%i",&number);

  
  do{
    
    right_digit = number % 10;
    printf("%i",right_digit);
    number = number / 10;
    
      

  }while(number != 0);
  if(number == '-' && number ==0){
      printf("-");
    }
  printf("\n");
  return 0;
}
