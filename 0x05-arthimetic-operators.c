#include <stdio.h>

int main(){
  float h, w;

  printf("Enter Width and Height: ");
  scanf("%f %f", &h, &w);
  printf("Area of Rect: %f\n", h*w);
  printf("Perimeter: %f\n", 2*(h+w));
  return 0;
}
