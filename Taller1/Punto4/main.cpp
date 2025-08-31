#include <cstdlib> 
#include <ctime> 

#include "CashSaverLib/CashSaverGuard.hpp"
#include "CashSaverLib/CashSaver.hpp"
#include "Deposit.hpp"
#include "Withdrawal.hpp"

int main(int argc, char** argv){
    srand(time(NULL));
    CashSaver cashSaver;
    CashSaverGuard guard;
    // Deposit d1("1089097158", 6);
    Withdrawal w1("1089097158", 10);
    guard.withdraw(w1, cashSaver);
    // guard.deposit(d1, cashSaver);

    return 0;
}