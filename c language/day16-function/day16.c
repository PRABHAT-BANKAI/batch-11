#include <stdio.h>
// TNRN
void show1()
{
  printf("1\n");
}
void show2()
{
  printf("2\n");
}
void show3()
{
  printf("3\n");
}
void show4()
{
  printf("4\n");
}
void show5()
{
  printf("5\n");
}

void sum(int a, int b)
{ // parameters

  int result = a + b;

  printf("sum =%d\n", result);
}

int main()
{
  show1();
  show5();
  show3();
  show4();

  sum(5, 6); // arguments

  sum(10,23);

  return 0;
}