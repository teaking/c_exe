//Using pointer with array
#include <stdio.h>

int main()
{
  char arr[4];
  int i;
  for(int i=0; i<4; i++)
    {
      printf("Address of arr[%d] = %p\n",i,&arr[i]);
    }
  printf("Address of arr is %p.\n", arr);
  printf("Address of arr[1] is %p.\n", arr + 1);

  printf("Value of arr[1]=%d equivalent to *(arr + 1) = %d\n",
	 arr[1],*(arr+1));
  return 0;
}
