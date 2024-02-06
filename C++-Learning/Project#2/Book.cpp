#include "Book.h"

void Book::add_book(){
    cout<<"  Book ID : "; cin>>id;
    cout<<"  Book Name : "; cin>>name;
    cout<<"  Quantity : "; cin>>quantity;
}

bool Book::prefix_search(string prefix){
        for(int i = 0 ; i < prefix.size(); i++ )
            if(prefix[i] != name[i])
                return false;
    return true;

}

void Book::print(){
    cout<<"  ID : "<<id<<" , Name : "<<name<<" , total_quantity : "<<quantity<<" , total_borrow : "<<borrow<<"\n";
}
