#include <stdio.h>

int main()
{

  // int n = 10;

  // for (int i = 0; i <= n; i++)
  // {
  //   printf("%d\n", i);

  //   if (i == 5)
  //   {
  //     // break;
  //     continue; // skip the current iterate
  //   }

  // }

  // int value = 95;
  // int count = 0;

  // for (int i = 1; i <= value; i++)
  // {
  //   if (value % i == 0)
  //   {
  //     count++;
  //   }
  // }

  // printf("Count = %d\n", count);
  // if (count == 2)
  // {
  //   printf("value = %d is  a prime number.\n", value);
  // }
  // else
  // {
  //   printf("value = %d is not  a prime number.\n", value);
  // }

  // int i;
  // printf("enter your value");
  // scanf("%d", &i);

  // if (i % 2 == 0)
  // {
  //   printf("your value is even");
  // }
  // else
  // {
  //   printf("your value is odd");
  // }

  for (int i = 1; i <= 50; i++)
  {

    if (i % 2 != 0)
    {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}