#include <stdio.h>

// 3 * 1 = 3

void oddEven(int value)
{
  if (value % 2 == 0)
  {
    printf("%d is even\n", value);
  }
  else
  {
    printf("%d is odd\n", value);
  }
}

int main()
{

  int num = 3;

  for (int i = 1; i <= 10; i++)
  {
    oddEven(i);
  }

  return 0;
}

// camelcase userNameOfStudent
//  snakecase user_name_of_student