// Online C compiler to run C program online
#include <stdio.h>

int main()
{

  // *****
  // *
  // *
  // *****
  // *
  // *
  // *****
  int n = 5;

  for (int i = 1; i <= n; i++)
  {

    if (i == 1 || i == (n / 2) + 1 || i == n)
    {
      for (int j = 1; j <= n; j++)
      {
        printf("*");
      }
    }
    else
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}