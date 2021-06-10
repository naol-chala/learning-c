#include <stdio.h>

int square(int num);

int main(){
  int n = 5;
  int sq = square(n);
  printf("%d^2 = %d",n , sq);

  return 0;
}

int square(int num){
  return num * num;
}
