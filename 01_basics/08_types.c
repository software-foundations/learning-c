#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int var_int = 0;
  double var_double = 4.2;
  float var_float = .846;
  char var_char_3[3] = "one";
  char var_char_4[4] = "zero";

  printf("%d\n", var_int);
  printf("%f\n", var_float);
  printf("%.2f\n", var_float);
  printf("%s\n", var_char_3);
  printf("%s\n", var_char_4);
  printf("%f\n", var_float);
  printf("%.3f\n", var_float);
  printf("%.2lf\n", var_float);
  printf("%5s\n", "hello");
  printf("%15.4f\n", 123456789123456.1234);

  return 0;
}