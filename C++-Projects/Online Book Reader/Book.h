#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma once

class Book
{
public:
    Book();
    ~Book();

    void add_book();

    string get_title();

    void add_book_content(int);

    int get_No_of_pages();

private:

    string ISBN;

    string author;

    string title;

    vector<string> pages;

};

#endif