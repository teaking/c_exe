#include <stdio.h>

int main(){

  typedef struct {
    char * name;

    int age;
  }person;
  //to allocate new person in the myperson argument
  person * myperson = malloc(sizeof(person));
  //this tells complier that we want to dynamically allocate just enough
  //to hold a person struct in memory and then return a pointer to the newly
  //allocated data

  myperson -> name = "john";
  myperson -> age = 13;

  printf("the person age is %s.\n",(*myperson).name );
  return 0;
  
}
