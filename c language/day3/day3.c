#include <stdio.h>

int main()
{

  const int number = 12;
  printf("Number is %d  \n", number);

  int result = number + number + 14;
  // data type integer
  float PI = 3.14;         // data type float
  char store = 'A';        // data type char
  char name[6] = "Batman"; // data type string

  printf("Number is %d same  %d \n", number, PI);
  printf("Float is %f \n", PI);
  printf("character is %c \n", number);
  printf("string is %s ", name);
  printf("result is %d", result);
  return 0;
}