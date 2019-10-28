#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char data[100];

    //open a file to write mode
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: " << endl;
    cin.getline(data, 100);

    //write the inputed data into the file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    //again write inputted data into the file
    outfile << data << endl;

    //close the opened file
    outfile.close();

    //open the file in read mode
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    //write the data at the screen
    cout << data << endl;

    //again read the data from the file and display it
    infile >> data;
    cout << data << endl;

    //close the opened file
    infile.close();

    return 0;
}