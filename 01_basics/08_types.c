#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int var_int = 0;
  double var_double = 4.2;
  long double var_long_double = 4.476;
  float var_float = .846;
  char var_char_3[3] = "one";
  char var_char_4[4] = "zero";
  unsigned long int var_unsigned_long_int = 12345678912345678;
  long int var_long_int = -12345678912345678;
  unsigned int var_unsigned_int = 123456789;
  short var_short = -400;
  short var_unsigned_short = 400;

  printf("1-> %d\n", var_int);
  printf("2-> %f\n", var_float);
  printf("3-> %.2f\n", var_float);
  printf("4-> %f\n", var_double);
  printf("5-> %s\n", var_char_3);
  printf("6-> %s\n", var_char_4);
  printf("7-> %f\n", var_float);
  printf("8-> %.3f\n", var_float);
  printf("9-> %.2lf\n", var_float);
  printf("10-> %5s\n", "hello");
  printf("11-> %15.4f\n", 123456789123456.1234);
  printf("12-> %Lf\n", var_long_double);
  printf("13-> %1.2Lf\n", var_long_double);
  printf("14-> %lu\n", var_unsigned_long_int);
  printf("15-> %ld\n", var_long_int);
  printf("16-> %u\n", var_unsigned_int);
  printf("17-> %hd\n", var_short);
  printf("17-> %hu\n", var_unsigned_short);
  return 0;

}