#include <stdio.h>

int main(){
  int a[5] = {1,2,3,4,5};
  int *p = a;

  printf("%d", *p);
  p++;
  printf("%d", *p);
  p += 3;
  printf("%d", *p);
  return 0;
}
