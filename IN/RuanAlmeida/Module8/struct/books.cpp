#include <iostream>
#include<cstring>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books Book1, Book2;

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Bjarne Stroustrup");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    cout << "Book 1 title: " << Book1.title << endl;
    cout << "Book 1 author: " << Book1.author << endl;
    cout << "Book 1 subject: " << Book1.subject << endl;
    cout << "Book 1 ID: " << Book1.book_id << endl;

    strcpy(Book2.title, "Learn Ruby Programming");
    strcpy(Book2.author, "Yukihiro Matsumoto");
    strcpy(Book2.subject, "Ruby Programming");
    Book2.book_id = 4500;

    cout << "Book 2 title: " << Book2.title << endl;
    cout << "Book 2 author: " << Book2.author << endl;
    cout << "Book 2 subject: " << Book2.subject << endl;
    cout << "Book 2 ID: " << Book2.book_id << endl;

    return 0;
}