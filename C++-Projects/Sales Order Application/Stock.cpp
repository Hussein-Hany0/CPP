#include "Stock.h"

Stock::Stock(){

}

Stock::~Stock(){

}

void Stock::add_stock(){

    int quantity;
    Product p;

    p.add_product();
    cout<<"Enter quantity : ";
    cin>>quantity;


    products_list.push_back(make_pair(p,quantity));
}

void Stock::update_stock(){

    int id;
    cout<<"Enter the product id : ";
    cin>>id;

    for(int i = 0 ; i < products_list.size() ; i++){

        if(products_list[i].first.get_id() == id){

            products_list[i].first.update();

            cout<<"Enter the quantity of the product : "; 
            cin>>id;

            products_list[i].second = id;
        }
    }
}

void Stock::delete_stock(){

    int id;
    cout<<"Enter the product Id : ";
    cin>>id;

    for(int i = 0 ; i < products_list.size() ; i++){

        if(products_list[i].first.get_id() == id){

            products_list.erase(products_list.begin() + i);

            break;
        }

        else if(i == products_list.size() -1 )
            cout<<"Wrong id"<<endl;

    }
}

int Stock::get_quantity(){

    int id;
    cout<<"Enter the id of the product : ";
    cin>>id;

    for(int i = 0 ; i < products_list.size() ; i ++){

        if(products_list[i].first.get_id() == id){

            return products_list[i].second;

            break;

        }

        else if(i == products_list.size() -1)
            cout<<"Wrong id"<<endl;
    }
}