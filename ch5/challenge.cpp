#include <iostream>

#include "creditcard.h"
#include "customer.h"



int main()
{
    Customer peter(Customer::State::Premium);
    Customer john(Customer::State::Standard);

    std::cout << "Peter:"  << std::endl;    
    peter.showBalance();
    std::cout << "John:"  << std::endl;
    john.showBalance();

    std::cout << "Each is going to withdraw some Money: First 50, then 100 and finally 200."  << std::endl;
    john.withdrawMoney(50);
    peter.withdrawMoney(50);

    john.withdrawMoney(100);
    peter.withdrawMoney(100);

    john.withdrawMoney(200);
    peter.withdrawMoney(200);

    std::cout << "Balance after withdrawing:" << std::endl;
    std::cout << "Peter:"  << std::endl;
    peter.showBalance();
    std::cout << "John:"  << std::endl;
    john.showBalance();

    return 0;
}
