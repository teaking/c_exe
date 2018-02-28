#include <stdio.h>

int main(){
	int n, search;
	printf("Enter the number of elements in array.\n");
	scanf("%d",&n);
	printf("Enter %d integer(s)\n", n);

	int array[n];
	for(int i= 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	printf("Enter the number to search using linear search.\n");
    scanf("%d",&search);
    for (int i = 0; i < n; ++i)
    {
    	if(array[i] == search)
    		printf("%d is present at locaiton %d.\n",search,i+1);
    }

    return 0;
}