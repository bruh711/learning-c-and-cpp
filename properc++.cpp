#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle()
  {
    length = breadth = 1;
  };
  Rectangle(int l, int b);
  int area();
  int perimeter();
  int getLength()
  {
    return length;
  };
  int setLength(int l)
  {
    return length = l;
  };
  ~Rectangle();
};

Rectangle::Rectangle(int l, int b)
{
  length = l;
  breadth = b;
}

int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2 * (length + breadth);
}

Rectangle::~Rectangle(){

};

int main()
{
  Rectangle r = {10, 5};
  cout << r.area() << "\n";
  cout << r.perimeter() << "\n";
  r.setLength(20);
  cout << r.getLength();
};