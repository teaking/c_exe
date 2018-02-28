#include <stdio.h>
typedef struct{
  char * name;
  int age;

}person;

void birthday(person * p);

int main(){
  person john;
  john.name = "john";
  john.age = 23;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday %s, you are now %d years old.\n",john.name, john.age);
  
  printf("%p",&john);

  
  return 0;
}

void birthday(person * p){
  (*p).age++;
  printf("%d",(*p).age);
}
