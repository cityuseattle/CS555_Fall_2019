#include <iostream>  /*It is predefined library function used 
                         for input and output called as header file.iostream contains
                        all functions of program like cout,cin etc. and #include tells preprocessor 
                        to include the header file in the program */
                      
using namespace std; /*std is the standard namespace. cout, cin and defined others too.
                             This mean one way to call by using std::cout and std::cin*/

int main() /*int main() used as the entry point of program. main() is a function where the program will 
                execute. */
{
    cout << "Comments"; /* The command cout -send to the standard output stream*/
    return 0;          /* return 0 indicates the complier of a successful termination 
                       of program while return  value of 1 is due
                        to an impremissible operation like division by zero or etc.*/
}