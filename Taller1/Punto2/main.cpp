#include <string>

#include "Checkout.hpp"

#include "ProductLib/Book.hpp"
#include "ProductLib/Music.hpp"

#include "CardLib/DebitCard.hpp"
#include "CardLib/CreditCard.hpp"


int main(){
    Checkout checkout;

    Book demons(50.0,"demons", "dostoyevsky", 250);
    Music anison(20, "ikario", "ado", 238);

    DebitCard dCard("123123123", "Davivienda");
    CreditCard cCard("123123123", "Bancolombia", 0.05);

    checkout.checkout(demons, dCard);
    checkout.checkout(anison, cCard, 2);

    return 0;
}