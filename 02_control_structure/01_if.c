#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // true   -> != 0
  // false  -> == 0

  if (-1) {
    printf("-1\n");
  }

  if (0) {
    printf("if 0 -> true\n");
  } else {
    printf("if 0 -> false\n");
  }

  if (0.5) {
    printf("0.5\n");
  }

  if (1) {
    printf("1\n");
  }

  // if nested
  if (1) {
    if (2) {
      printf("if 1 if 2\n");

      // end if (2)
    }

    // end if (1)
  }

  if (0) {
    printf(" if 0\n");

    // end if (0)
  } else {
    if (1) {
      printf("if 0 else if 1\n");
    }
  }

  return 0;
}