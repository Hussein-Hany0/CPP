#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

struct User {

    int id;

    string name;

    int books[10] {0,0,0,0,0,0,0,0,0,0};

//--------------------------

    void add_user();

    bool borrow_check(int);

    void print();
};

#endif // USER_H_INCLUDED
