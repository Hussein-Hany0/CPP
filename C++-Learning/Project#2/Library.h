#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include <algorithm>
#include <iostream>
#include <string>
#include "User.h"
#include "Book.h"
//#include "Compare.h"

using namespace std;

extern int cnt_book;
extern int cnt_user;


struct Library {

    Book book[100];

    User user[100];

//----------------------

    void Insert_book();

    void Insert_user();

    void list_by_id();

    void list_by_name();

    void look();

    void print_users();

    void borrow_request();

    void who_borrow_book();

    void prefix();

};

//bool compare_by_id(Book& b1 , Book& b2){
//    return b1.id < b2.id;
//}
//
//bool compare_by_name(Book& b1,Book& b2){
//    return b1.name < b2.name;
//}

#endif // LIBRARY_H_INCLUDED
