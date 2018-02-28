#include <stdio.h>

int main(){
  long int a, b;
  int c =  scanf("%ld%ld", &a,&b);

  printf("%d",c);

  //the value for the c is 2
  
   while(scanf("%ld%ld",&a,&b) == 2){
     a = a-b;
     long int d = a % 10;
     if(d != 9){
       printf("%ld\n", d);
       a++;
       printf("Value of a =  %ld.\n",a);
       
     }else{

       a--;
       printf("Value of a-- =  %ld.\n",a);
     }

    }
  return 0 ;
}
