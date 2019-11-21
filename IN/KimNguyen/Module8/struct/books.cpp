#include <iostream>
#include <cstring>
using namespace std;

struct Books{
    char tittle[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Books Book1; //declare Book1 of type Book
    struct Books Book2;

    //book 1 specification
    strcpy(Book1.tittle, "Learn C++ Programming");
    strcpy(Book1.author, "Bjarne Stroustrup");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6496407;

    //book 2 specification
    strcpy(Book2.tittle, "Learn Ruby Programming");
    strcpy(Book2.author, "Yukihiro Matsumoto");
    strcpy(Book2.subject, "Ruby Programming");
    Book2.book_id = 4500;

    //Print Book1 info
    cout << "Book1 tittle: " << Book1.tittle << endl;
    cout << "Book1 author: " << Book1.author << endl;
    cout << "Book1 subject: " << Book1.subject << endl;
    cout << "Book1 id: " << Book1.book_id << endl;

    //Print Book2 info
    cout << "Book2 tittle: " << Book2.tittle << endl;
    cout << "Book2 author: " << Book2.author << endl;
    cout << "Book2 subject: " << Book2.subject << endl;
    cout << "Book2 id: " << Book2.book_id << endl;



    return 0;
}