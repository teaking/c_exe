#include <stdio.h>

int main(int argc, char *argv[])
{
  int val1, val2, val3, highestValue;
  printf("Enter three number:-");
  scanf("%d%d%d",&val1,&val2,&val3);

  if(val1 > val2 && val1 > val3){
    highestValue = val1;
      
  }else if(val2 > val1 && val2 > val3){
    highestValue = val2;
  }else{
    highestValue = val3;
  }
  printf("\nHighest value is %d.\n", highestValue);
  return 0;
}
