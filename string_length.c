//finding the string length of the given string
#include <stdio.h>
int stringLength(char *A)
{
  int i = 0;
  while (A[i] != '\0')
    i++;
  return i;
}
void stringCopy(char *A, char *B)
{
  //copying string
  int N1 = stringLength(A);
  for(int k =0; k < N1; k++)
    {
      B[k] = A[k];
    }
}
void stringConcatenate(char *A, char *B)
{
  int i,j;
  for(i= 0; i < stringLength(B); i++)
    {
      int index = 4 + i;
      printf("%d\n",index);
      A[index] = B[i];
    }
}
int main()
{
  char a[20]= "Hello", b[20] = "worlding";
  printf("%d\n",stringLength(a));
  stringCopy(a,b);
  printf("%s\n",b );
  stringConcatenate(a, b);
  printf("%s\n",a );
    printf("%d\n",stringLength(a));
}
