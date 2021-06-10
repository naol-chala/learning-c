#include <stdio.h>

#define NATURAL_LOG 2.71

int main(){
  const double PI = 3.14;
  int my_var = 5;
  int my_other_var = 10;

  int sum_of_my_vars = my_var + my_other_var;
  printf("%d + %d = %d", my_var, my_other_var, sum_of_my_vars);
  printf("\n");
  printf("Value of PI: %f", PI);
  printf("\n");
  printf("Value of e: %f", NATURAL_LOG);
  return 0;
}
