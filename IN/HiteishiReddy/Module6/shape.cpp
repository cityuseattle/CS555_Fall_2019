#include <iostream>
using namespace std;

class shape{
    public:
    void setWidth(int w) {
        width = w;

    }
    void setHeight(int h){
        height = h;

    }

    protected:
    int width;
    int height;
};

class Rectangle: public shape{
    public: 
    int getArea(){
        return(width * height);

    }
};

class Square: public shape{
    public: 
    int getArea(){
        return(width * width);

    }
};

int main(void){
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    Square sq;
    sq.setWidth(10);
    sq.setHeight(7);

    cout << "Total area:" <<sq.getArea() << endl;

    return 0;

}
