#include <stdio.h>

int main()
{

  // int a = 12;
  // int b = 15;
  // int c = 20;

  // // (condtion)?  true execution : false execution

  // (a > b && a > c) ? printf("a is greater then  both c and B\n") : (b > a && b > c) ? printf("b is greater then both a and c\n")
  //                                                                                 : printf("c is greather both a and b\n");

  // (b % 2 == 0) ? printf("a is even ") : printf("a is odd");

  int number;
  char value;

  printf("enter your alpabeht :");

  scanf("%c", &value);

  switch (value)
  {
  case 'A':
    printf("call forard to reception\n");
    break;

  case 'B':
    printf("call forward to lab1 \n");
    break;

  case 3:
    printf("call forward to lab2 \n");
    break;

  case 4:
    printf("call forward to BM Cabin \n");
    break;
  case 5:
    printf(" for all services\n");
    break;

  default:
    printf("invalid number\n");
  }

  return 0;
}