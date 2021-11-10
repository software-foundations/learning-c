#include <stdio.h>
#include <stdlib.h>

// continue behavior in
// 1 - while
// 2 - for
// 3 - do while

int main(void) {
  int i = 0;
  int j = 0;
  int k = 0;

  printf("while\n");

  while (i <= 5) {
    printf("\ni == %d", i);
    i++;

    if (i == 3) {
      printf("\ni == 3 mached");
      continue;
    }
  }

  printf("\n\nfor\n");

  for (j = 0; j <= 5; j++) {
    printf("\nj == %d", j);

    if (j == 3) {
      printf("\nj == 3 mached");
      continue;
    }
  }

  printf("\n\ndo_while\n");

  do {
    printf("\nk == %d", k);
    k++;

    if (k == 3) {
      printf("\nk == 3 mached");
      continue;
    }
  } while (k <= 5);

  return 0;
}