#include "Book.h"

Book::Book(){

    author = title = ISBN = "";
}

Book::~Book(){

}

void Book::add_book(){

    cout<<"Author : ";
    cin>>author;

    cout<<"Title : ";
    cin>>title;

    cout<<"ISBN : ";
    cin>>ISBN;

    int n;

    cout<<"Number of pages : ";

    cin>>n;

    add_book_content(n);
}

string Book::get_title(){

    return title;
}

void Book::add_book_content(int n){

    string i;

    while(n--){

        cin>>i;

        pages.push_back(i);

    }
}

int Book::get_No_of_pages(){

    return pages.size();
}
