#include <stdio.h>

void swap(int *n1, int *n2);

int main(){
  int a = 1;
  int b = 2;
  printf("Swap (a, b) = (%d,%d)", a, b); 
  swap(&a,&b);
  printf("After Swap (a, b) = (%d,%d)", a, b); 

  return 0;
}

void swap(int *n1, int *n2){
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
