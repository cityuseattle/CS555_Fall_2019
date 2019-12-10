#include <iostream>
#include <cstring>

using namespace std;

struct Books {
  char  title[50];
  char  author[50];
  char  subject[100];
  int   book_id;
};

int main(){
    struct Books Book1;

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Learn C++ Programming");
    strcpy(Book1.subject, "Learn C++ Programming");
    Book1.book_id = 123123123;

    cout<<Book1.title<<endl;
    cout<<Book1.author<<endl;
    cout<<Book1.subject<<endl;
    cout<<Book1.book_id<<endl;

    return 0;
    }