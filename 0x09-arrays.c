#include <stdio.h>

int main(){
  int marks[7] = {4,3,6,5,8,1,8};
  int total= 0;

  for(int i = 0; i< 7; i++){
    total += marks[i];
  }
  
  printf("%d", total);
  return 0;
}
