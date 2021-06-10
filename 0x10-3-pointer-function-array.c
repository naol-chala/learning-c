#include <stdio.h>

int sum(int *a, int length);

int main(){
  int arr[5] = {1,2,3,4,5};
  printf("Total = %d", sum(arr, 5));
  return 0;
}

int sum(int *a, int length){
  int total = 0;

  for(int i=0; i<length; i++){
    total += a[i];
  }

  return total;
}
