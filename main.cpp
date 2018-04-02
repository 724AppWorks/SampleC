#include <iostream>
#include <cstring>

using namespace std;

class Point {
  private:
    int x;
    int y;
  public:
    Point(int a = 0, int b = 0) {
      x = a;
      y = b;
    }

    void show() {
      cout << "x : " << x << " y : " << y << "\n";
    }

    Point operator+(Point p);

    friend Point operator+(int a, Point p);
};

Point Point::operator+(Point p) {
  Point tmp;
  tmp.x = x + p.x;
  tmp.y = y + p.y;
  return tmp;
}

Point operator+(int a, Point p) {
  Point tmp;
  tmp.x = a + p.x;
  tmp.y = a + p.y;
  return tmp;
}

int main() {

  Point p1(1, 3);
  Point p2(5, 2);

  p1 = p1 + p2;

  p1.show();

  p2 = 3 + p2;

  p2.show();

  return 0;
}
