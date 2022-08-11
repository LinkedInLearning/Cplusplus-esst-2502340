#include "customer.h"

#include <iostream>

Customer::Customer(const State state) :
mState(state)
{}

bool Customer::verifyStatus()
{
    if(mCreditcard.getState() != CreditCard::State::Valid)
        return false;

    if(mState == State::Premium)
        return true;

    if(mCreditcard.getBalance() < 0)
        return false;

    return true;
}

void Customer::withdrawMoney(const int amnt)
{
    if( !verifyStatus() )
    {
        std::cout << "Die Transaktion kann leider nicht durchgefuehrt werden." << std::endl;
        return;
    }

    mCreditcard.changeAmnt(-amnt);
}

void Customer::showBalance()
{
    mCreditcard.showBalance();
}
