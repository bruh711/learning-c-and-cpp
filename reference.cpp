#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a = 10;
  int &r = a;

  cout << a;
  r++;
  cout << r;
  cout << a;
}