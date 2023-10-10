// Write a C Program that calculates the average of three numbers.

#include <stdio.h>

int main() {
  float a = 5;
  float b = 5;
  float c = 6;

  float avr = (a + b + c) / 3;

//   5 + 5 + 6 = 16 / 3 = 5.3333

  printf("average = %f\n", avr);
  printf("average = %.1f\n", avr);

  return 0;
}