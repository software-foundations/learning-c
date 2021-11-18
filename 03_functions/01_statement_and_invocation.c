#include <stdio.h>
#include <stdlib.h>

int accumulate(int value) {
  int accumulated = 0;

  for (int i = 0; i <= value; i++) {
    accumulated += i;
  }

  return accumulated;
}

int main(void) {
  int result;

  result = accumulate(10);

  printf("accumulate(10) == %d", result);

  return 0;
}