#include "User.h"

void User::add_user(){
    cout<<"  Name : "; cin>>name;
    cout<<"  ID : "; cin>>id;
}

bool User::borrow_check(int b){
    for(int i = 0 ; i < 10 ; i++){
        if(books[i] == b)
            return true;
    }

    return false;
}

void User::print(){
    cout<<"  User ID : "<<id<<" , Name : "<<name<<"  , borrowed books ids : ";
    for(int i = 0 ; i < 10 ; i++){
        if(books[i] != 0)
            cout<<books[i]<<" ";
    }
    cout<<"\n";

}
