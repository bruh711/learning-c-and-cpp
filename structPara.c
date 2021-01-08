#include <stdio.h>
#include <conio.h>

struct Rectangle
{
  int length;
  int breadth;
};

int area(struct Rectangle a)
{
  int z;
  z = a.breadth * a.length;
  return z;
};

int main()
{
  struct Rectangle r =
      {
          /* data */
          10, 5};

  printf("area: %d", area(r));
};