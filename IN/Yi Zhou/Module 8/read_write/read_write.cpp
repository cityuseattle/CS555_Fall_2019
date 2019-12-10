#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    ofstream outfile;

    outfile.open("afile.dat"); //open afile.dat file

    cout<<"Writing to the file"<<endl; 

    cout<<"Enter your name: ";

    cin.getline(data,100); //inut

    outfile<<data<<endl; //write data to file

    cout<<"Enter your age: ";

    cin>>data;

    cin.ignore(); 

    outfile<<data<<endl; //write data to file

    outfile.close();

    ifstream infile;

    infile.open("afile.dat");

    cout<<"Reading from the file"<<endl;

    infile>>data; // read data from file

    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile.close();

    return 0;
}