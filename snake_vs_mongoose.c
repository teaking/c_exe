#include <stdio.h>

int main(){
  printf("Enter the number for your strings =\n");
  int num;
  scanf("%d", &num);
  char * s_and_k [num];
  for( int i = 0; i < num; i++){
    scanf("%s", s_and_k[i]);
  }
      printf("The value inside s_and_k is \n");
  for (int i = 0; i < num; i++) {
    printf("%s\n", s_and_k[i] );
    
  }
  
  return 0;
}
