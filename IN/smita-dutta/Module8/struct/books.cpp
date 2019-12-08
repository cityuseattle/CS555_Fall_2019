#include<iostream>
#include<cstring>
using namespace std;

struct Books{

    char title[50];
    char author[50];
    char subject[50];
    int book_id;

};

int main()
{
   struct Books Book1;
   struct Books Book2;
   strcpy(Book1.title , "Learn c++ programming");
   strcpy(Book1.author, "Bjarne Stroustrup");
   strcpy(Book1.subject , "C++ programming");
   Book1.book_id=6495407;

   //print
   cout<<"Book 1 title :"<< Book1.title<<endl;
   cout<<"Book 1 author :"<< Book1.author<<endl;
   cout<<"Book 1 subject:"<< Book1.subject<<endl;
   cout<<"Book 1 id:"<< Book1.book_id<<endl;



   
   strcpy(Book2.title , "Learn Ruby Programming");
   strcpy(Book2.author, "Yukihiro");
   strcpy(Book2.subject , "Ruby programming");
   Book2.book_id=4500;

   //print
   cout<<"Book 2 title :"<< Book2.title<<endl;
   cout<<"Book 2 author :"<< Book2.author<<endl;
   cout<<"Book 2 subject:"<< Book2.subject<<endl;
   cout<<"Book 2 id:"<< Book2.book_id<<endl;

    return 0;

}


