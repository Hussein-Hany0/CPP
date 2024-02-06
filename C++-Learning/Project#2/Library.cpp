#include "Library.h"

extern int cnt_book = 0;
extern int cnt_user = 0;

void Library::Insert_book(){

    char c;

    for(int i = cnt_book ; i < 100 ; i++){
        book[cnt_book++].add_book();
        cout<<"  New Book ? y/n : "; cin>>c;
        if(c == 'y' || c == 'Y')
            continue;
        else
            break;
    }
}

void Library::Insert_user(){

    char c;

    for(int i = cnt_user ; i < 100 ; i++){
        user[cnt_user++].add_user();
        cout<<"  New User ? y/n : "; cin>>c;
        if(c == 'y' || c == 'Y')
            continue;
        else
            break;
    }

}

//void Library::list_by_id(){
//    sort(book,book+cnt_book,compare_by_id);
//    for(int i = 0 ; i < cnt_book ; i++)
//        book[i].print();
//}
//
//void Library::list_by_name(){
//    sort(book,book+cnt_book,compare_by_name);
//    for(int i = 0 ; i < cnt_book ; i++)
//        book[i].print();
//}

void Library::look(){
    string b;
    cout<<"  Prefix : "; cin>>b;
    for(int i = 0 ; i < cnt_book ; i++){
        if(book[i].prefix_search(b))
            cout<<book[i].name<<" ";
    }
}

void Library::print_users(){
    for(int i = 0 ; i < cnt_user ; i++)
        user[i].print();
}

void Library::borrow_request(){

    string u;
    string b;
    cout<<"  User Name : "; cin>>u;
    cout<<"  Book Name : "; cin>>b;

    int i , j , k;
//------------------------------------------------------
    for(j = 0 ; j < cnt_user ; j++){
        if(user[j].name == u)
            break;
        else if(j == cnt_user -1)
            return;
    }
//--------------------------------------------------------
    for( i = 0 ; i < cnt_book ; i++){
        if(book[i].name == b)
            break;
        else if(i == cnt_book -1)
            return;
    }
//--------------------------------------------------------
    for( k = 0 ; k < 10 ; k++){
        if(user[j].books[k] == 0)
            break;
        else if(k == 9)
            return;
    }
//---------------------------------------------------------
    user[j].books[k] = book[i].id;
}

void Library::who_borrow_book(){

    string name;
    cout<<"  Book Name : "; cin>>name;

    int i , j , k ;
//--------------------------------------------------

    for(i = 0 ; i < cnt_book ; i++){
        if(book[i].name == name)
            break;
        else if(i == cnt_book -1)
            return;
    }
//---------------------------------------------------------
    for(j = 0 ; j < cnt_user ; j++){
        for(k = 0 ; k < 10 ; k++){
            if(user[j].books[k] == book[i].id)
                break;
            else if(j == cnt_user -1)
                return;
        }
        if(user[j].books[k] == book[i].id)
            break;
    }
//---------------------------------------------------------
    cout<<user[j].name<<"\n";
}

void Library::prefix(){

    string name;
    cout<<"  Prefix : "; cin>>name;

    for(int i = 0 ; i < cnt_book ; i++)
        if(book[i].prefix_search(name))
            cout<<book[i].name<<"\n";
}

