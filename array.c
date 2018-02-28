#include <stdio.h>

int main(){

		int array_length = 0;
		printf("Enter array length: \n");
		scanf("%d", &array_length);
		printf("user provided %d\n", array_length);
		
		int n[array_length];
		n[2] = 5;
		int len = sizeof(n)/sizeof(n[0]);
		printf("Gives the size of array : %d\n", len);
		return 0;
		
}
