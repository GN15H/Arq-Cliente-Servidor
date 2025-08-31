#include "Facade.hpp"

int main(){
    OnlineShoppingFacade facade;
    facade.placeOrder("1089097158", "121212", 69.5);

    return 0;
}