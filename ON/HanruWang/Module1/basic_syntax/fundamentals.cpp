#include <iostream>  //this program needs the header <iostream> 

using namespace std; //tells the compiler to use the std namespace;
                     //avoid prepending of namespaces with the using namespace directive;
                     //it tells the compiler that the subsequent code is 
                     //making use of names in the specified namespace

//below is the main function where program execution begins
int main() {

    cout << "Comments"; //The predefined object cout is an instance of ostream class. 
                        //The cout object is said to be "connected to" the standard output device, 
                        //which usually is the display screen.
    
    return 0; //The return value of the main function must be an int.

}