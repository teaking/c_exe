//linear search using pointers
#include <stdio.h>

long linear_search(long * arr, long n, long find)
{
  for(int i=0; i< n;i++)
    {
      if(find == *(arr+i))
	{
	  printf("Found target %ld at %d address %p.\n",find,
		 i,(arr+i)+1);
	}
    }
}

int main()
{
  long n;
  printf("Input number of elements in array.\n");
  scanf("%ld",&n);
  printf("Input %ld numbers:\n",n);
  long array[n];
  for(int i = 0; i < n; i++)
    {
      scanf("%ld", (array + i));
    }
  printf("Input target number: \n");
  long target;
  scanf("%ld",&target);
  linear_search(array,n,target);
  
}
