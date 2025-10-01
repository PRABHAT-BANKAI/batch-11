#include <stdio.h>

int main()
{

  // int i = 1;

  // do
  // {
  //   i++;
  //   printf("%d\n", i);

  // } while (i <= 5);

  for (int i = 1; i <= 5; i++)
  {
    int count = 0;

    for (int j = 1; j <= 5; j++)
    {
      count++;
    }
    printf("%d\n", count);
  }

  return 0;
}