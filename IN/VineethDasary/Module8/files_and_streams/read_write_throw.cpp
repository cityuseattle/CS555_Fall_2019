#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100];

    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your Name: ";
    cin.getline(data, 100);

    outfile << data << endl;

    cout << "Enter your Age: ";
    cin >> data;
    cin.ignore();

    outfile << data << endl;

    outfile.close();

    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}