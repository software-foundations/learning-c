#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a = 1;
  int b = 2;

  // with variables
  printf("%f\n", a + b);
  printf("%d\n", 1 + b);

  // with values
  printf("%f\n", 1.0 + 2);
  printf("%d\n", 1 + 2);
}