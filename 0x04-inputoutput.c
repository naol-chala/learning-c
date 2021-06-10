#include <stdio.h>

int main(){
  char name[100];
  int c, b;

  printf("Input and Output\n");

  printf("Enter any key: ");
  char a = getchar();
  printf("\nYou Entered: %c \n", a);
   
  printf("Enter Your name: ");
  scanf("%s", name);
  printf("Hi %s, Nice to meet you", name);
  
  printf("Enter two numbers: ");
  scanf("%d %d", &c, &b);
  printf("Sum: %d", c+b);
  

  return 0;
}
