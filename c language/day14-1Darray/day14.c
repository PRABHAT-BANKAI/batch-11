#include <stdio.h>

int main()
{

  // array store 1d array

  // int numbers[6];

  // numbers[0] = 12;
  // numbers[1] = 2;
  // numbers[2] = 77;
  // numbers[3] = 89;
  // numbers[4] = 67;

  // printf("enter your new value:");

  // scanf("%d", &numbers[5]);

  // printf("%d", numbers[5]);

  // int numbers[5] = {12, 55, 66, 21, 44}; // index start with zero

  int values[9] = {
      15,
      23,
      51,
      2,
      23, 45, 7, 6, 32};

  // printf("%d\n", numbers[4]);
  // printf("%d", values[5]);

  for (int i = 0; i <= 6; i++)
  {
    values[i] = values[i]+100;
    printf("%d\n", values[i]);
  }
  return 0;
}