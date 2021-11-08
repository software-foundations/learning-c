#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int var = 0;

  // pos increment
  var++;
  var--;

  // pre increment
  --var;
  ++var;

  printf("var %d", var);

  return 0;
}