#include "Department.h"

Department::Department(){

}

Department::~Department(){

}

void Department::set_department_name(string name){

    department_name = name;
}

void Department::add_book(){

    Book b;
    b.add_book();

    books.push_back(b);
}

void Department::list_all_books() {

    if(books.size() == 0)
        return;

    for(int i = 0 ; i < (int)books.size() ; ++i)
        cout<<books[i].get_title()<<"\n";
}