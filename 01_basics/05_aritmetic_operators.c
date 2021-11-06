#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a = 5;
  float b = 2;
  int c = 5;
  int d = 2;

  printf("a + b -> %f\n", a + b);
  printf("a - b -> %f\n", a - b);
  printf("a * b -> %f\n", a * b);
  printf("a / b -> %f\n", a / b);
  printf("a module b -> %d\n", c % d);

  return 0;
}