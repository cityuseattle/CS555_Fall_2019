#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books Book1;
    strcpy(Book1.title, "Learning C++ Programming");
    strcpy(Book1.author, "Bjarne Stroustrup");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    struct Books Book2;
    strcpy(Book2.title, "Learn Ruby Programming");
    strcpy(Book2.author, "Yukihiro Matsumoto");
    strcpy(Book2.subject, "Ruby Programming");
    Book2.book_id = 4500;

    cout << "Book1 title: " << Book1.title << endl;
    cout << "Book1 auithor: " << Book1.author << endl;
    cout << "Book1 subject: " << Book1.subject << endl;
    cout << "Book1 ID: " << Book1.book_id << endl << endl;

    cout << "Book2 title: " << Book2.title << endl;
    cout << "Book2 auithor: " << Book2.author << endl;
    cout << "Book2 subject: " << Book2.subject << endl;
    cout << "Book2 ID: " << Book2.book_id << endl << endl;


    return 0;
}