#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a;
  float b;
  float c;
  float d;
  float result;

  a = 1;
  b = 2;
  c = 3;
  d = 4;

  result = a + b + c + d;
  printf("1: %f\n", result);

  result = a - b - c - d;
  printf("2: %f\n", result);

  result = a * b + c;
  printf("3: %f\n", result);

  result = a * b + c / d;
  printf("4: %f\n", result);

  result = (a * b) + (c / d);
  printf("5: %f\n", result);

  return 0;
}
