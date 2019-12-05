#include<iostream>
#include<cstring>
using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;

};

int main(){
    struct Books Book1;

    strcpy( Book1.title, "Learn C++ Programing");
    strcpy( Book1.author, "Shang Wu");
    strcpy( Book1.subject, "C++ Programing");
    Book1.book_id = 123123123;

    struct Books Book2;

    strcpy( Book2.title, "Learn Ruby Programming");
    strcpy( Book2.author, "Yukihiro Matsumototo");
    strcpy( Book2.subject, "Ruby Programing");
    Book2.book_id = 4500;


    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}