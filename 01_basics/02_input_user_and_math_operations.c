#include <stdio.h>

int main(void) {
  int a;
  int b;
  int sum_ab;
  int diff_ab;
  int prod_ab;
  float division_ab;

  printf("a: ");
  scanf("%d", &a);

  printf("b: ");
  scanf("%d", &b);

  sum_ab = a + b;
  diff_ab = a - b;
  prod_ab = a * b;
  division_ab = a / b;

  printf("sum: %d\nsubtraction: %d\nproduct: %d\ndivision: %f", sum_ab, diff_ab,
         prod_ab, division_ab);
  return 0;
}