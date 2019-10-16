#include <iostream> //#include is known as a preprocessor directive,which is used to load files. <> indicate the start and end of file name to be loaded. iostream is the header file which contains all the functions of program like cout, cin etc. 
using namespace std; //this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

int main() //int main() is used as the entry point of the program, main() is the function from where the program will start to execute
{ // { } indicates the life of the block
    cout << " Comments \n"; // cout is an instance of ostream class. The cout object is said to be "connected to" the standard output device, which usually is the display screen
    return 0; // return value is the exit code of the program
}