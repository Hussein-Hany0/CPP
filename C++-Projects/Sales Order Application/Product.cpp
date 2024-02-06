#include "Product.h"

Product::Product(){

    name = number = "";
    id = price = type = 0;
}

Product::~Product(){

}

void Product::add_product(){

    cout<<"Product name : "; 
    cin>>name;

    cout<<"Product Number : ";
    cin>>number;

    cout<<"Product Id : ";
    cin>>id;

    cout<<"Product Price : ";
    cin>>price;

    cout<<"Product type : ";
    cin>>type;
}

void Product::print_product(){
    
    cout<<"Product Name : "<<name<<"\tPrduct number : "<<number<<endl
        <<"Product ID :   "<<id<<"\tProdcut Price   : "<<price<<endl
        <<"Product : type : "<<type<<endl<<endl;

}

void Product::update(){

    cout<<"Product name : "; 
    cin>>name;

    cout<<"Product Number : ";
    cin>>number;

    cout<<"Product Id : ";
    cin>>id;

    cout<<"Product Price : ";
    cin>>price;

    cout<<"Product type : ";
    cin>>type;    
}

int Product::get_id(){
    return id;
}