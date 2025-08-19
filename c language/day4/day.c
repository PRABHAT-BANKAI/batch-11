#include <stdio.h>

#define PI 3.14;
int main()
{
  int value;
  int value_2;
  printf("enter your number");
  scanf("%d", &value);

  printf("enter your number2");
  scanf("%d", &value_2);

  int result = value + value_2;

  printf("result %d", result);

  return 0;
}