#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

struct Book {

    int id;

    string name;

    int quantity;

    int borrow = 0;

 //-----------------------

    void add_book();

    bool prefix_search(string);

    void print();

};

#endif // BOOK_H_INCLUDED
