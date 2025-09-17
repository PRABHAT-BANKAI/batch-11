#include <stdio.h>

int yuvraj()
{
  printf("yuvraj\n");
}

int armaan()
{
  printf("armaan\n");
  yuvraj();
}

int main()
{
  yuvraj();
  armaan();

}