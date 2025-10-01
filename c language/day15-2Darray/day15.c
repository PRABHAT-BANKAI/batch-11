#include <stdio.h>

int main()
{
  int array[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

  // array[0][4]= 55;

  // printf("enter your matrix number");
  // scanf("%d",&array[2][4]);

  // printf("%d\n",array[0][4]);
  //   printf("%d\n",array[2][4]);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}