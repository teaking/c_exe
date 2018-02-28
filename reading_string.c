//reading string from user
//This does not read spaces,
//if spaces found scanf ends there
#include <stdio.h>
int main()
{
  char a_string[80], b_string[80];
  printf("%s\n","Enter some words in a string:\n" );
  scanf("%s%s", a_string, b_string);
  printf("%s, %s\n",a_string, b_string );
  return 0;
}
