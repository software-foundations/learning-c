#include <stdio.h>
#include <stdlib.h>

// function prototypes
int sum_10(int value);
float multiply_by_1_5(int value);
void say_hello();

int main(void) {
  printf("sum_10(5) == %d\n\n", sum_10(5));
  printf("multiply_by_1_5(2) == %f\n\n", multiply_by_1_5(2));
  say_hello();

  return 0;
}

int sum_10(int value) { return value + 10; }

float multiply_by_1_5(int value) { return value * 1.5; }

void say_hello() {
  printf("hello!");
  return;
}