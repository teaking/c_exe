#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  int p, prime[50], i , primeIndex = 2;

  bool isPrime;
  prime[0] = 2;
  prime[1] = 3;
  for(p = 5; p <= 50; p+2){
    isPrime = true;
    for(i = 1; isPrime && p / prime[i] >= prime[i];i++){
      if(p % prime[i] ==0){
	isPrime = false;
      }
    }
      if(isPrime == true){
	prime[primeIndex] = p;
	++primeIndex;
	
      }

    
  }
  for(i = 0; i < primeIndex; ++i){
    printf("%i \n",prime[i]);

  }
  return 0;
}
