#include <stdio.h>

int main(){
  int number;
  printf("address of the number %p.\n",&number);
  printf("Type in number:-");
  scanf("%i",&number);
  if(number < 0){
    number = -number;
    // negative and negative equals to positive
  }
  printf("\nThe absolute value for the given no. is %i.\n",number);

  return 0;

}
