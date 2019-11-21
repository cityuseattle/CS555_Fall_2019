#include <iostream>

using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main() {
   Box Box1;                // Declare Box1 of type Box
   Box KimYuBox;             // add your code below in this line
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // KimU box specification
   KimYuBox.height = 10.0;
   KimYuBox.length = 11.0;
   KimYuBox.breadth = 12.0;

   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of KimYu box
   volume = KimYuBox.height * KimYuBox.length * KimYuBox.breadth;
   cout << "Volume of KimU Box : " << volume <<endl;

   return 0;
}