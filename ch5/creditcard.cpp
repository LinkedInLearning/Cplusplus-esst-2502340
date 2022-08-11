#include "creditcard.h"

#include <iostream>

CreditCard::CreditCard()
{

}

CreditCard::State CreditCard::getState() const
{
    return mState;
}

int CreditCard::getBalance() const
{
    return mBalance;
}

void CreditCard::changeAmnt(const int amnt)
{
    mBalance += amnt;
}

void CreditCard::showBalance()
{
    std::cout << "Balance: " << mBalance << std::endl;
}
