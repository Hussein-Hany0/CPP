#include <iostream>
#include <vector>
#include "Book.cpp"
#include "User.cpp"

using namespace std;

class Library {

    vector<Book> books;

    vector<User> users;

public : 

    void home_page(){

        int c;

        cout<<"1 - log in \n"
            <<"2 - sing up \n"

            <<"choice : ";
            cin>>c;

        if(c == 1)
            Login_page();
    }

    void Login_page(){

        string user_name;

        string password;

        cout<<"User Name : ";
            cin>>user_name;

        cout<<"Password : ";
            cin>>password;

        int x = check(user_name , password);

        if(x){

             user_page(x);
        }

        else
            cout<<"Wrong information\n";

    }

    void user_page(int n){

        int c;

        cout<<"1 - view profile \n"
            <<"2 - view & select from readed Books\n"
            <<"3 - view & select from current Books\n"
            <<"4 - Log out\n";

        cin>>c;

    }

    int check(string user_name , string password){

        for(int i = 0 ; i < users.size() ; i++)
            if(users[i].get_user_name() == user_name && users[i].get_password() == password)
                return i;

        return -1;
    }

    void add_user(){
        
        User u;
        u.add_user();

        users.push_back(u);
    }

    void add_book(){

        Book b;
        b.add_book();

        books.push_back(b);
    }

};

int main(){


   
}
