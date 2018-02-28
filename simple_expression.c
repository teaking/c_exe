#include <stdio.h>
#include <ctype.h>

int main(){
  float val1, val2;
  char operator;
  printf("type in expression:- ");
  scanf("%f %c %f",&val1,&operator,&val2);

  switch(operator)
    {
    case '+':
      printf("%.2f\n",val1 + val2);
      break;
    case '-':
      printf("%.2f\n",val1 - val2);
      break;
    case '*':
      printf("%.2f\n",val1 * val2);
      break;
    case '/':
      printf("%.2f\n",val1 / val2);
      break;
    default:
      printf("Unknown operator.\n");
      break;
    }
  return 0;
}
