#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int var_int = 0;

  var_int += 3;
  var_int -= 1;
  var_int *= 5;
  var_int /= 2;
  var_int %= 4;
  printf("var_int %d\n", var_int);

  return 0;
}