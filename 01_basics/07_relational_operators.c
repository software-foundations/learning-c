#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%d\n", 1 > 0);
  printf("%d\n\n", 1 < 0);

  printf("%d\n", 1 >> 0);
  printf("%d\n\n", 1 << 0);

  printf("%d\n", 1 >> 1);
  printf("%d\n", 1 << 1);

  return 0;
}