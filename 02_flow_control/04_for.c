#include <stdio.h>
#include <stdlib.h>

int line_break() { printf("---------\n"); }

// counter-controled repetition
int main(void) {
  int i;
  int sum;

  // ++i works the same
  for (i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  line_break();

  // --i works the same
  for (i = 5; i > 0; i--) {
    printf("%d\n", i);
  }

  line_break();

  // for (expression 1; EXPRESSION 2; expression 3) {}
  // we can declare variable inside loop
  for (int j = 0; j <= 5 * 2; j++) {
    printf("j %d\n", j);
  }

  line_break();

  // AVOID THIS
  sum = 0;
  for (i = 0; i <= 3; sum += i, i++)
    ;
  printf("sum %d\n", sum);

  // PREFERE THIS APPROACH
  sum = 0;
  for (i = 0; i <= 3; i++) {
    sum += i;
  }
  printf("sum %d\n", sum);

  return 0;
}