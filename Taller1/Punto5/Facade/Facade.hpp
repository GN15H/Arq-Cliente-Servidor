#pragma once

#include <iostream>

#include "Inventory.hpp"
#include "Payment.hpp"
#include "Shipping.hpp"

class OnlineShoppingFacade{
private:
    Inventory m_inventory;
    Payment m_payment;
    Shipping m_shipping;
public:
    OnlineShoppingFacade(): m_inventory(Inventory()), m_payment(Payment()),
    m_shipping(Shipping()){}

    bool placeOrder(const std::string& userId, const std::string& productId, double amount) const {
        if(m_inventory.checkInventory(productId) && m_payment.processPayment(userId, amount))
            return m_shipping.checkShipping(userId, productId);
        else{
            std::cout<<"Unable to place order"<<std::endl;
            return false;
        }
    }
};