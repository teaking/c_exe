//reversing
#include <stdio.h>

int main()
{
  int n, reverse = 0;
  printf("Enter number to reverse.\n");
  scanf("%d",&n);
  while(n!=0){
    reverse = reverse * 10;
    reverse += n%10;
    n = n/10;
  }
  printf("New number after reverse %d.\n", reverse);
  return 0;
}
