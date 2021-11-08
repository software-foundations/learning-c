#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  int j = 0;

  int k = -1;
  int l = 10;

  // counter-controled repetition

  while (i < 10) {
    printf("%d\n", i);
    i = i + 1;
  }

  printf("\n");

  while (j < 10) {
    printf("%d\n", j);
    j++;
  }

  printf("\n");

  // k++ works the same
  while (++k < 10) {
    printf("%d\n", k);
  }

  printf("\n");

  // k-- works the same
  while (--l >= 0) {
    printf("%d\n", l);
  }

  return 0;
}