#pragma once

#include <iostream>
#include "./ProductLib/Product.hpp"
#include "./CardLib/Card.hpp"
#include "./CardLib/CreditCard.hpp"

class Checkout {
public:
    Checkout(){}

    void checkout(Product p, Card c){
        std::cout<<"Compra de "<<p.getProductName()<<"\n1 cuota\n"<<p.getPrice()<<std::endl;
    }
    void checkout(Product p, CreditCard c, int installments){
        std::cout<<"Compra de "<<p.getProductName()<<"\n";
        std::cout<<"Precio a 1 cuota "<<p.getPrice()<<"\n";
        std::cout<<"Precio de cada cuota a "<<installments<<" cuota(s) : "<< p.getPrice()/((double) installments)<<"\n";
        std::cout<<"Precio total a "<<installments<<" cuota(s) : "<<p.getPrice() + (p.getPrice()*c.getInterest()*installments)<<std::endl;
    }
};