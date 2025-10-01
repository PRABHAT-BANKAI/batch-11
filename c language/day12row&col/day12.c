#include <stdio.h>

int main()
{

  // 12345
  // 12345
  // 12345
  // 12345
  // 12345

  // outer row

  // int n = 9;
  // int c = n/2;
  // for (int i = 1; i <= n; i++)
  // {

  //   // inner column
  //   for (int j = 1; j <= c; j++)
  //   {
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }

  int n = 6;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}