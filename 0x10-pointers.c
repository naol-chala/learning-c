#include <stdio.h>

int main() {
  int n = 10;
  int *m = &n;

  printf("address of n: %x\n", &n);
  printf("content of p: %x\n", m);
  printf("value of n: %d\n", n);
  printf("p is pointing to: %d\n", *m);

  n =15;
  printf("m is now %d", *m);


  return 0;
}
