#include <stdio.h>
#include <conio.h>

class Rectangle
{
private:
  int length;
  int breadth;

public:
  void initialize(int x, int y)
  {
    length = x;
    breadth = y;
  };

  int area()
  {
    return length * breadth;
  }

  void changeLength(int x)
  {
    length = x;
  }
};

int main()
{
  Rectangle r;

  r.initialize(10, 5);
  printf("%d \n", r.area());
  r.changeLength(200);
};
