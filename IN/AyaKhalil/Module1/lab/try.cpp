#include <iostream>
#include <sstream>
using namespace std;

class Shape {     //class shape as a parent class for the Rect and circle class
public:
    virtual double Area() = 0;  // a virtual method area to calculate the area and call it from the other two classes
};

class Rectangle:public Shape {   // class Rect inherit class shape
private:             // define the class attributes private to make it available inside the class 
    double length;  // we define length and height to calculate the area 
    double height;
public:
    Rectangle(double height, double length){   //constructor 
        this->height=height;
        this->length=length;
    }
    double Area(){             // method to calculate the area 
        return height*length;
    }

};
class Circle:public Shape { //class circle inherit from class shape
private:    
    double r;
public:
    Circle(double r) {
        this->r=r;
    }   
    double Area() {      
        return r*r*3.14;
    }


};
int main(){
    string shape_type;  //empty string to use it as an input 
    Shape *shape;       
    while(1) {
        cout << "Please enter Rectangle or Cirle " <<endl; 
        getline(cin, shape_type);           //get the input user and put it into the string
        if(shape_type == "Circle" || shape_type == "circle") { //check the input 
            double r;
            cout << "Please enter Radius " <<endl;  
            cin >> r;  //r= the input radios 
            shape = new Circle(r);   //intialize new circle type shape 
            break;   // break statement to stop the code 
        } if(shape_type == "Rectangle" || shape_type == "rectangle") {  //in case the input was rectangle
            double l,w;
            cout << "Please enter Length " <<endl; // the user will enter the height and width
            cin >> l;
            cout << "Please enter width " <<endl;
            cin >> w;
            shape = new Rectangle(l,w);    
            break;
        }
    }

    cout << "Area = ";
    cout << shape->Area();
    return 0;
}