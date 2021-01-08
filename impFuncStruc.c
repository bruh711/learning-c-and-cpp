#include <stdio.h>
#include <conio.h>

struct Rectangle
{
  int length;
  int breadth;
};

void initialize(struct Rectangle *a, int x, int y)
{
  a->length = x;
  a->breadth = y;
};

int area(struct Rectangle r)
{
  return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int x)
{
  r->length = x;
}

int main()
{
  struct Rectangle r;

  initialize(&r, 10, 5);
  printf("%d \n", area(r));
  changeLength(&r, 200);
  printf("%d", r.length);
};
