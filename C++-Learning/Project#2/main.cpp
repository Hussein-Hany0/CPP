#include <algorithm>
#include <iostream>
#include "Library.h"

using namespace std;


int menu(){

    int c;

    cout<<"  1) add_book\n";
    cout<<"  2) search_book_by_prefix\n";
    cout<<"  3) print who borrowed book by name\n";
    cout<<"  4) print library by id\n";
    cout<<"  5) print library by name\n";
    cout<<"  6) add user\n";
    cout<<"  7) user_borrow_book\n";
    cout<<"  8) user_return book\n";
    cout<<"  9) print users\n";
    cout<<"  10) exit\n";
    cout<<"  Choice : "; cin>>c;

    if(c >= 1 && c <= 9)
        return c;
    menu();
}


int main(){

    Library lib;

    while(1){

    int c = menu();
    if(c == 1)
        lib.Insert_book();
    else if(c == 2)
        lib.prefix();
    else if(c == 3)
        lib.who_borrow_book();
    else if(c == 4){}
        //lib.list_by_id();
    else if(c == 5){}
        //lib.list_by_name();
    else if(c == 6)
        lib.Insert_user();
    else if(c == 7)
        lib.borrow_request();
    else if(c == 9)
        lib.print_users();
    else if(c == 10)
        return 0;

    }


}
