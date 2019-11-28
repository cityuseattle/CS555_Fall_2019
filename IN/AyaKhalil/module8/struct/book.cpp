#include <iostream>
#include<cstring>

using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Books b1;
    struct Books b2;

    strcpy(b1.title,"learn c++ programming");
    strcpy(b1.author,"aya samir");
    strcpy(b1.subject,"c++ programming");
    b1.book_id=887766;

    strcpy(b2.title,"learn Ruby programming");
    strcpy(b2.author,"Yukihiro Matsumoto");
    strcpy(b2.subject,"Ruby prog");
    b2.book_id=4500;

    cout<<"book 1 title: "<<b1.title<<endl;
    cout<<"book 1 author: "<<b1.author<<endl;
    cout<<"book 1 subject: "<<b1.subject<<endl;
    cout<<"book 1 id: "<<b1.book_id<<endl;

    cout<<"book 2 title: "<<b2.title<<endl;
    cout<<"book 2 author: "<<b2.author<<endl;
    cout<<"book 2 subject: "<<b2.subject<<endl;
    cout<<"book 2 id: "<<b2.book_id<<endl;

    

    return 0;
}