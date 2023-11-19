#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

int main()
{
    struct Book Book1;
    struct Book Book2;

    Book* Book1ptr;

    Book1ptr = &Book1;
    cout << (*Book1ptr).author << endl;

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 1234455;

    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;
    return 0;
}