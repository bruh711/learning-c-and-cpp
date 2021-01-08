#include <bits/stdc++.h>

using namespace std;

// only in cpp
//only & is difference from call by value
void swap(int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a, b;
  a = 10;
  b = 20;
  swap(a, b);
  printf("%d %d", a, b);
};