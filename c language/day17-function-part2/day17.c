#include <stdio.h>

int square()
{
  int a = 5;

  printf("hello");
  return a * a;
}

int addition(int a, int b)
{

  return a + b;
}
int main()
{
  int result = square();

  int result2 = addition(10, 5);
  int result3 = addition(55, 15);

  printf("%d\n", result);

  printf("%d\n", result2);
  printf("%d\n", result3);

  return 0;
}
