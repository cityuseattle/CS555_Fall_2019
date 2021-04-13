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
    struct Books Book1;

    strcpy( Book1.tittle, "Learn C++ Programming");
    strcpy( Book1.author, "Bjarne Stroustrup");
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    struct Books Book2;

    strcpy( Book2.tittle, "Learn Ruby Programming");
    strcpy( Book2.author, "Yukihiro Matsumoto");
    strcpy( Book2.subject, "Ruby Programming");
    Book2.book_id = 4500;

    cout<< "Book 1 tittle: " << Book1.tittle << endl;
    cout<< "Book 1 author: " << Book1.author << endl;
    cout<< "Book 1 subject: " << Book1.subject << endl;
    cout<< "Book 1 id : " << Book1.book_id << endl;

    cout<< "Book 2 tittle: " << Book2.tittle << endl;
    cout<< "Book 2 author: " << Book2.author << endl;
    cout<< "Book 2 subject: " << Book2.subject << endl;
    cout<< "Book 2 id : " << Book2.book_id << endl;    

    return 0;
}