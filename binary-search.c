//binary search implementation
#include <stdio.h>

int main()
{
  int n;
  printf("Enter number of element\n");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers.\n", n);
  for(int i=0; i<n; i++){
    scanf("%d",(arr+i));
  }
  int target;
  printf("Enter value to search for.\n");
  scanf("%d",&target);

  int first = 0;
  int last = n - 1;
  int mid = (first + last) / 2;

  while(first <= last){
    if(arr[mid] < target){
      first = mid + 1;
    }
    else if(arr[mid] == target){
      printf("%d found at location %d.\n",target, mid);
      break;
    }else{
      last = mid -1;
    }
    mid=(first + last) / 2;
    
  }
  if(first > last){
    printf("Not found! %d is not present in the list.\n", target);
    return 0;
  }
    
}
