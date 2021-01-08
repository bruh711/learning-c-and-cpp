#include <iostream>
#include <cmath>

using namespace std;

class Book
{
public:
  string name;
  string author;
  int pages;
};

int main()
{
  Book book1;
  book1.name = "harry potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

  cout << book1.pages;
};
