#include <iostream>
using namespace std;

class Shape
{
public:
virtual void draw() =0;
};

class Rectangle : Shape
{
public:
void draw()
{
cout << “drawing rectangle…” << endl;
}
};

int main() {
Rectanlge rec;
rec.draw();
return 0;
}
