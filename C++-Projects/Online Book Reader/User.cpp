#include "User.h"

User::User(){

    name = user_name = password = email = "";
}


User::~User(){

}

void User::add_user(){

    cout<<"User name : ";
    cin>>user_name;

    cout<<"Password : ";
    cin>>password;

    cout<<"Name : ";
    cin>>name;

    cout<<"Email : ";
    cin>>email;
}

void User::view_profile(){

    cout<<"Name      : "<<name<<endl
        <<"Email     : "<<email<<endl
        <<"user name : "<<user_name<<endl;
}

string User::get_user_name(){

    return user_name;
}

string User::get_password(){

    return password;
}

void User::add_book(Book b){

    book.push_back(b);

    cnt.push_back(0);

    is_reading();
}

void User::is_reading(){

    cnt[cnt.size()-1] = book[book.size() -1].open_book(cnt[cnt.size() -1]);    
}