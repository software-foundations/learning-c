#include <stdio.h>

int main(void) {
  int a;
  float b;
  int c = 3;
  float d = 4;
  float result_float;
  int result_int;

  printf("a: ");
  scanf("%d", &a);

  printf("b: ");
  scanf("%f", &b);

  result_float = a + b;
  printf("a + b: %f\n", result_float);

  result_int = a + c;
  printf("a + c: %d\n", result_int);

  result_float = c + d;
  printf("c + d: %f\n", result_float);

  return 0;
}