#include <stdio.h>
#include <conio.h>

int add(int a, int b)
{
  int c;
  c = a + b;
  return c;
}

int main()
{
  int x, y, z;
  x = 10;
  y = 5;
  z = add(x, y);
  printf("sum: %d", z);
}