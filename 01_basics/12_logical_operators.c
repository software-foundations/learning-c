#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 0;
  int b = 10;

  if (a == 0 && b == 10) {
    printf("a == 0 && b == 10\n");
  }

  if (a == 0 || b == 0) {
    printf("a == 0 or b == 0\n");
  }

  if (!(a == 10)) {
    printf("!(a == 10)");
  }

  return 0;
}