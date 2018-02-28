#include <stdio.h>

int main(){
  char c;
  printf("Enter the single character: ");
  scanf("%c",&c);

  if((c  >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    printf("It is an alphabetic");
  }else if (c >= '0' && c <= '9'){
  printf("It is number");
}else{
   printf("It is special character.");
}
return 0;
  
}