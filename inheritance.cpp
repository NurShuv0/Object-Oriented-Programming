
#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
  void Faz()
  {
    cout << "This is a shape" << endl;
  }
};

class Polygon : public Shape
{
public:
  void Faz()
  {
    cout << "Polygon is a shape" << endl;
  }
};
class Rectangle : public Polygon
{
public:
  void Faz()
  {
    cout << "Rectangle is a polygon" << endl;
  }
};

class Triangle : public Polygon
{
public:
  void Faz()
  {
    cout << "Triangle is a polygon" << endl;
  }
};

class Square : public Rectangle
{
public:
  void Faz()
  {
    cout << "Square is a rectangle" << endl;
  }
};
int main()
{
  Shape F1;
  F1.Faz();

  Polygon F2;
  F2.Faz();

  Rectangle F3;
  F3.Faz();

  Triangle F4;
  F4.Faz();

  Square F5;
  F5.Faz();

  return 0;
}
