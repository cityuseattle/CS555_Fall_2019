#include <iostream>
using namespace std;

class Shape{
    public:
    
    void setwidth(int w){
        width=w;
    }
    void setheight(int h){
        height=h;
    }
    protected:
        int width;
        int height;
};
class Rect: public Shape {
    public:
    int getarea(){
        return (width* height);
    }
};

class Square: public Shape {
    public:
    int getarea(){
        return (width* width);
    }
};

int main(void){
    Rect r;
    Square sq;

    r.setwidth(5);
    r.setheight(7);
    sq.setwidth(10);

    cout<<"Total area: "<<r.getarea()<<endl;
    cout<<"Total area: "<<sq.getarea()<<endl;

    return 0;
}
