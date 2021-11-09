#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int var = 30;

  switch (var) {
  case 0:
    printf("var == 0");
    break;

  case 10:
    printf("var == 10");
    break;

  case 20:
    printf("var == 20");
    break;

  default:
    printf("var is not 0, 10, or 20!");
  }

  return 0;
}