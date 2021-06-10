#include <stdio.h>

int factorial(int num);

int main(){
  int num = 5;
  printf("%d!=%d",num, factorial(num));
  printf("\n");
  return 0;
}

int factorial(int num) {
  if (num <= 1){
    return 1;
  }else {
    return num * factorial(num - 1);
  }
}
