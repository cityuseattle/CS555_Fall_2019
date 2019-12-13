#include <iostream>
#include <cstring>
using namespace std;
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main(){
    struct Books book1, book2;
    strcpy(book1.title, "Learn C++ Programming");
    strcpy(book1.author, "Bjarne Stroustrup");
    strcpy(book1.subject, "C++ Programming");
    strcpy(book2.title,"Learn Ruby Programming");
    strcpy(book2.author,"Yukihiro Matsumoto");
	strcpy(book2.subject, "Ruby Programming");
	book2.book_id = 4500;

    book1.book_id = 6495407;
    cout <<"Book1 title: " <<book1.title <<endl;
    cout <<"Book1 author: " <<book1.author <<endl;
    cout <<"Book1 subject: " <<book1.subject <<endl;
    cout <<"Book1 id: " <<book1.book_id <<endl;
    cout <<"Book1 title: " <<book2.title <<endl;
    cout <<"Book1 author: " <<book2.author <<endl;
    cout <<"Book1 subject: " <<book2.subject <<endl;
    cout <<"Book1 id: " <<book2.book_id <<endl;
    return 0;
}