#include <iostream>
#include <cstring>
using namespace std;

struct books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct books book1;
    struct books book2;

    strcpy(book1.title,"learn C++ programming");
    strcpy(book1.author, "BS");
    strcpy(book1.subject, "C++ programming");
    book1.book_id=6432345;

    strcpy(book2.title, "learn ruby programming");
    strcpy(book2.author, "YM");
    strcpy(book2.subject, "ruby programming");
    book2.book_id=4500;

    cout<<"book1 title: "<<book1.title<<endl;
    cout<<"book1 author: "<<book1.author<<endl;
    cout<<"book1 subject: "<<book1.subject<<endl;
    cout<<"book1 id: "<<book1.book_id<<endl;

    cout<<"book2 title: "<<book2.title<<endl;
    cout<<"book2 author: "<<book2.author<<endl;
    cout<<"book2 subject: "<<book2.subject<<endl;
    cout<<"book2 id: "<<book2.book_id<<endl;

    return 0;
}