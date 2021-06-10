#include <stdio.h>

int main(){
  char initial = 'F';

  switch(initial) {
    case 'A':
      printf("Very Good");
      break;
    case 'B':
      printf("Good");
      break;
    case 'C':
      printf("Not Bad");
      break;
    case 'D':
      printf("Bad");
      break;
    case 'F':
      printf("Stupid");
      break;
    default:
      printf("What are you talking About");
  }

  return 0;
}
