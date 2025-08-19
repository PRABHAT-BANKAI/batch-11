#include <stdio.h>

int main()
{
#define PI 3.14;
  const int Number = 45; // constant value
  float value = 3.12;
  char alphabet = 'A';

  // number = 55;

  printf("Number is %3d\n", Number);
  printf("Number is %3.2d/n", Number);

  printf("value is %15f\n", value);

  printf("character is %c ", alphabet);

  return 0;
}