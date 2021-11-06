#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // true   -> != 0
  // false  -> == 0

  if (-1) {
    printf("-1\n");
  }

  if (0) {
    printf("0\n");
  }

  if (0.5) {
    printf("0.5\n");
  }

  if (1) {
    printf("1\n");
  }
}