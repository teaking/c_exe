#include <stdio.h>

int main(){
  char vowels [][5] = {
    {'a','e','i','o','u'},
    {'A','E','I','O','U'}

  };

  for(int i = 0; i < 2; i++){

    for(int j =0; j < 5; j++){
      printf("Address of vowels [%d][%d]: %p.\n", i, j , &vowels[i][j] );
    }
    printf("\n");

  }


  return 0;
  
}
