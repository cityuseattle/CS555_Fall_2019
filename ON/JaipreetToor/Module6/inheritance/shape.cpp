#include "iostream"
using namespace std;

class Shape {
  public:
    void setWidth(int w) {
      width = w;
    }

    void setHeight(int h) {
      height = h;
    }

  protected:
    int width;
    int height;

};

class Rectangle: public Shape {
  public:
    int getArea() {
      return (width * height);
    }
};

class Circle: public Shape {
  public:
    int getArea() {
      return (width * width);
    }
};

int main() {
  Rectangle rect;
  
  rect.setWidth(5);
  rect.setHeight(7);

  cout << "Total area: " << rect.getArea() << endl;

  Circle circle;
  
  circle.setWidth(10);

  cout << "Total area: " << circle.getArea() << endl;

  return 0;
}