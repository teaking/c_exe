//finding the largest number using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>
int main()
{
  //depending upon the number of elements, the required size
  //is allocated this prevents the wastage of memory
  float * data;
  printf("Enter the total number of elements:\n");
  int n= 0;
  scanf("%d",&n);
  //allocate memory size for n number elements
  data = (float *) calloc(n, sizeof(float));
  if(data == NULL){
    printf("Error - memory is not allocated.\n");
      exit(0);
  }
  
  for (int i=0; i< n; i++){
    printf("Enter elements: %d", i +1);
    scanf("%f",data+ i);
  }
  printf("\n");
  for(int i =0; i < n; i++){
    
    if(*data < *(data + i)){
    *data = *(data + i);
    }
  }
  printf("Largest element = %.2f.\n",*data);
  
    return 0;
}
