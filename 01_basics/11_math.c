#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void srand_usage(void);

int main(void) {
  printf("sqrt(25) == %f\n\n", sqrt(25));

  printf("2 ^ 5 == %f\n\n", pow(2, 5));

  printf("log(2.718282) == %f\n\n", log(2.718282));

  printf("log10(1.0) == %f\n\n", log10(1));

  printf("fabs(-3) == %f\n\n", fabs(-3));

  printf("ceil(3.1) == %f\n\n", ceil(3.1));

  printf("floor(3.8) == %f\n\n", floor(3.8));

  printf("fmod(5.1/3) == %f\n\n", fmod(5.1, 3));

  printf("rand() == %d\n\n", rand());
  printf("rand() == %d\n\n", rand());
  printf("rand() == %d\n\n", 1 + rand() % 6);
  printf("rand() == %d\n\n", 1 + rand() % 6);

  /*
  * sin (x)
  * cos (x)
  * sin (x)

  where x is in radians
  */

  printf("sin(45) = %f\n\n", sin(45));
  printf("cos(45) = %f\n\n", cos(45));
  printf("tan(45) = %f\n\n", tan(45));

  srand_usage();

  return 0;
}

void srand_usage(void) {
  // seed is the number used to generate a fix sequence of random numbers
  unsigned seed;

  printf("\nsrand_usage\n");

  printf("srand(1)\n");
  seed = 1;
  srand(seed);
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n\n", rand());

  printf("srand(1)\n");
  // autocast int to unsigned
  srand(1);
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n\n", rand());

  printf("srand(2)\n");
  seed = 2;
  srand(seed);
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());

  return;
}