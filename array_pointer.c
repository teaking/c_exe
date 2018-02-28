#include <stdio.h>

int main(){
  char *names[] = {
    "zawa",
    "haha",
    "malek",
    "ren"
    
  }

  int MAX = 4;
  int i = 0;

  for(i = 0; i < MAX; i++){
    printf("value of the name[%d] = %s\n", i , *names);
    *names++;
  }
  return 0;
}
