/*#include <iostream>
using namespace std;

int main()
{
    int i,j,k;
    char c,ch;
    float f,salary;
    double d;

    k=555;
    c='C';
    ch='S';

    cout << "Value of variable k is: "<<k<<endl;
    cout << "Value of variable c is: "<<c<<endl;
    cout << "Value of variable ch is: "<<ch<<endl;
}*/
#include <iostream>
using namespace std;

class Area
{
    private:
        float length,breadth,radius;
    public:
        void setRectangle(float l,float b)
        {
            if(l>0)
            {
                length=l;
                cout<<" length of Rectangle is: "<<length<<"\n";
            }
            else if(l<0)
            {
                cout<<"length cannot be negative so converting to positive\n";
                length=abs(l);
                cout<<" length of Rectangle is: "<<length<<"\n";
            }
            else 
            {
                cout<<"length cannot be 0, so assigning default valus as 1.0\n";
                length=1.0;
                cout<<" length of Rectangle is: "<<length<<"\n";
            }
            if(b>0)
            {
                breadth=b;
                cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
            }
            else if(b<0)
            {
                cout<<"Breadth cannot be negative so converting to positive\n";
                breadth=abs(b);
                cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
            }
            else
            {
                cout<<"breadth cannot be 0, so assigning default valus as 1.0\n";
                breadth=1.0;
                cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
            }
            
        }
        void setRadius(float r)
        {
            if(r>0)
            {
                radius=r;
                cout<<" Radius of Circle is: "<<radius<<"\n";
            }
            else if(r<0)
            {
                cout<<"Radius cannot be negative so converting to positive\n";
                radius=abs(r);
                cout<<" Radius of Circle is: "<<radius<<"\n";
            }
            else
            {
                cout<<"Radius cannot be 0 so assigning default value as 1.0\n ";
                radius=1.0;
                cout<<" Radius of Circle is: "<<radius<<"\n";
            }
        }
        float getlength()
        {
            return length;
        }
        float getbreadth()
        {
            return breadth;
        }
        float getradius()
        {
            return radius;
        }
        float rectangleArea()
        {
            return length*breadth;
        }
        float circleArea()
        {
            return 3.14*radius*radius;
        }
};

int main()
{
    Area area1;
    int number,option;
    option=1;
    while(option==1)
    {
        cout<< "Select option 1 or 2 \n 1. Rectangle\n 2.Circle \n";
        cin>>number;
        if(number==1 || number==2 || number==3)
        {
            option=0;
        }
    }
    
    if(number==1)
    {
        float l,b,r;
        cout<<"Enter length of Rectangle: ";
        cin >>l;
        cout<<"Enter breadth of Rectangle: ";
        cin >>b;
        area1.setRectangle(l,b);
        cout<<"Area of Rectangle is: " <<area1.rectangleArea();
    }
    else if(number==2)
    {
        float r;
        cout<<"Enter radius of circle: ";
        cin>>r;
        area1.setRadius(r);
        cout<<"Area of Circle is: "<<area1.circleArea();
    }
    else
    {
        cout<<"Incorrect entry, Enter option 1 or 2";
        exit;
    }
    
    
}

