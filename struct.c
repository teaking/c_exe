#include <stdio.h>

int main(int argc, char *argv[])
{
  typedef struct{
    char * name;
    int age;

  }person;

  person max;
  max.name = "max";
  max.age = 20;
  
  printf("name of the person is %s",max.name);
  return 0;
}
