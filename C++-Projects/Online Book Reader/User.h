#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using namespace std;

#pragma once

class User
{
public:
    User();

    ~User();

    void add_user();

    void view_profile();

    string get_user_name();

    string get_password();

    void add_book(Book);

    void is_reading();

private:

    string user_name;

    string password;

    string name;

    string email;

    vector<Book> book;
    vector<int> cnt;
};

#endif