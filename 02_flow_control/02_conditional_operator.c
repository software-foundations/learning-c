#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%s", 1 > 0 ? "true\n" : "false\n");

  1 > 0 ? printf("true\n") : printf("false\n");

  return 0;
}