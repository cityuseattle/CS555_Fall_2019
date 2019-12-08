#include <iostream>
#include <sstream>
using namespace std;
 
 // create a class rectangle
class Rectangle {  
  // create private class variables to prevent its modification from outside the class     
private:              
    float length;  
    float width;

public:                                      // constructor 
    Rectangle(float width, float length){   
        this->width=width;
        this->length=length;
    }
    //setlength mthod to set the length using this method
    void setlength(float lenght){
        this->length=length;
    }

    void setwidth(float width){
        this->width=width;
    }

     //calculate the perimeter for the rectangle
    float perimeter(){
        return (width+length)*2;
    }
     //calculate the area for the rectangle
    float Area(){            
        return width*length;
    }
    //printing function
    void Show(){
        cout << "Width = " << width << ", Length = " << length<< endl;
    }
     
    int sameArea(Rectangle rect){
        if(abs(this->Area() - rect.Area()) < 0.001){   //in case the difference in the area less than .001, it will return 1 as they equal
            return 1;
        }
        return 0;
    }

};
int main(){
    Rectangle rect1(5,2.5);  //create object from class rectangle and assign len and width
    Rectangle rect2(5,18.9);  // create another object from class rectangle

    rect1.Show();          
    rect2.Show();
    cout << "First Rectangle Area is: " << rect1.Area() << " The first Rect perimeter is " << rect1.perimeter()<< endl;
    cout << "Second Rectangle Area is: "<<  rect2.Area() << " The second Rect perimeter is " << rect2.perimeter()<< endl;
    cout << rect1.sameArea(rect2) << endl;
}