//this program runs merge sort 
#include <stdio.h>

int merge_sort(int arr[], int n);
int check_array(int arr[], int n);

int main(int argc, char const *argv[])
{	
	int arr_size = 7;
	int array []=  {38, 27, 43, 3, 9, 82, 10};
	check_array(array,7);
	
	return 0;
}
//utility to check the state of array 
int check_array(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d\n",arr[i]);
	}
}

int merge_sort(int arr[], int n){
	int middle = n / 2; //getting middle point of the array to 
	//Divide array recusrively util we get single elements where sorting is trivial
	int ri 


}