//playing with buffer overflow

#include <stdio.h>
int main()
{
  int arr[10];
  int n = 12;//overflow
  printf("Enter %d numbers in arr, for to store\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",arr+i);
  }

  for(int i= 0; i < n ; i++){
    printf("arr[%d] value is : %d.\n",i,*(arr+i));
  }
  return 0;
}
