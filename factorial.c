//find factorial of a number

#include<stdio.h>

int factorial(int num);

int main(){
  int factorialNum = 0;
  printf("Enter number to find factorial of: \n");
  scanf("%d",&factorialNum);
  int val = factorial(factorialNum);
  
}

int factorial(int num){
  if(num == 0){
    return 1;
  }
  
  int val = num * factorial(num - 1);
  printf(val);
}

/*

fact 5
5 * 4
4 * 3
3 * 2
2 * 1
factorial of 5! = 1 x 2 x 3 x 4 x 5
 */
