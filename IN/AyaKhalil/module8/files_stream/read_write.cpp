#include <fstream>
#include<iostream>
using namespace std;

int main(){
    char data[100];

    ofstream outfile;
    outfile.open("afile.dat");
    cout<<"writting to the file"<<endl;
    cout<<"enter ur name: ";
    cin.getline(data,100);

    outfile<<data<<endl;
    cout<<"enter ur age: ";
    cin>>data;
    cin.ignore();
    outfile<<data<<endl;
    outfile.close();

    ifstream infile;
    infile.open("afile.dat");

    cout<<"reading from the file"<<endl;
    infile>>data;

    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();

    return 0;
}