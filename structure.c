#include <stdio.h>
#include <conio.h>

struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  struct Rectangle r =
      {
          10,
          5};

  struct Rectangle *p = &r;
  r.length = 10;
  (*p).length = 12;
  p->length = 15;
  //----------------------------------------------------------------
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
  p->breadth = 30;
  p->length = 50;
}