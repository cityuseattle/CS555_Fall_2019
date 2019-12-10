#include <iostream>
#include <cstring>
using namespace std;

using namespace std;

//BOOK Struct
struct Books
{
    char title[50];  //title describe
    char author[50]; //authhor name
    char subject[100];
    int book_id; //id
};

//enter function
int main()
{

    struct Books Book1;

    strcpy(Book1.title, "Learn C++ Programming"); //copy to book1 object

    strcpy(Book1.author, "Bjarne Stroustrp");

    strcpy(Book1.subject, "C++ Programming");

    Book1.book_id = 6495407;

    struct Books Book2;

    strcpy(Book2.title, "Ruby Programming"); //copy to book1 object

    strcpy(Book2.author, "Yukihiro Mastumoto");

    strcpy(Book2.subject, "Ruby Programming");

    Book2.book_id = 4500;

    cout << "Book 1 title" << Book1.title << endl;
    cout << "Book 1 author" << Book1.author << endl;
    cout << "Book 1 subject:" << Book1.subject << endl;
    cout << "Book 1 id" << Book1.book_id << endl;

    cout << "Book 1 title" << Book2.title << endl;
    cout << "Book 1 author" << Book2.author << endl;
    cout << "Book 1 subject:" << Book2.subject << endl;
    cout << "Book 1 id" << Book2.book_id << endl;
    return 0;
}