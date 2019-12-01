#include <iostream>
using namespace std;

class Shape{
    protected:
        int width,height;

        public:
            Shape(int a=0,int b=0)
            {
                width=a;
                height=b;
            }

            virtual int area()
            {
                cout<<"Parent class   area:"<<endl;
                return 0;
            }
};

class Rectangle:public Shape{
    public:
    Rectangle(int a=0,int b=0):Shape(a,b)
    {
        
    }

    int area()
    {
        cout<<"Rectangle class area"<<endl;
        return width*height;
    }
};


class Traingle:public Shape{
    public:
    Traingle(int a=0,int b=0):Shape(a,b)
    {
        
    }

    int area()
    {
        cout<<"Traingle class area"<<endl;
        return width*height/2;
    }
};


int main()
{
    int area;

    Shape *shape;
    Rectangle rec(10,7);

    shape=&rec;

    area=shape->area();

    cout<<area<<endl;

    Traingle tri(5,10);
    shape=&tri;

    cout<<shape->area()<<endl;
}