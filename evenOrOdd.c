#include <stdio.h>

int main(){
  int number_to_test, remainder;
  printf("Enter the number to test:");
  scanf("%i",&number_to_test);
  remainder = number_to_test % 2;
  //by dividing with 2 if the remainder has decimal then the number is odd
  if(remainder == 0){
    printf("%i is even number.\n",number_to_test);
  }
  else{
    printf("%i is odd number.\n",number_to_test);
  }
  return 0;
}
