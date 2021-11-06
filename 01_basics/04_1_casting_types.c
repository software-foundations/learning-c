#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char string_from_int[2];
  char string_from_float[10];

  printf("%d\n", (int)1.0);
  printf("%f\n", (float)1);
  printf("%.2f\n", (float)2);

  sprintf(string_from_int, "%d", 3);
  printf("%s\n", string_from_int);

  sprintf(string_from_float, "%f", 4.0);
  printf("%s\n", string_from_float);

  return 0;
}