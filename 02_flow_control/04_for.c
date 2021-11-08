#include <stdio.h>
#include <stdlib.h>

int line_break() { printf("---------\n"); }

// counter-controled repetition
int main(void) {
  int i;

  // ++i works the same
  for (i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  line_break();

  // --i works the same
  for (i = 5; i > 0; i--) {
    printf("%d\n", i);
  }

  return 0;
}