#include <iostream>

enum class CustomerState {
    New,
    Standard,
    Premium
};

enum CreditCardState {
    New,
    Valid,
    TransferInProgress,
    Invalid,
    Error
};


struct CreditCard {
    CreditCardState mState = CreditCardState::New;
    int mBalance = 100;
};

struct Customer {
    CustomerState mState = CustomerState::New;
    CreditCard mCreditcard;
};

bool verifyStatus(const Customer &cust)
{
    if(cust.mCreditcard.mState != CreditCardState::Valid)
        return false;

    if(cust.mState == CustomerState::Premium)
        return true;

    if(cust.mCreditcard.mBalance < 0)
        return false;

    return true;
}

void withdrawMoney(Customer &cust, const int amnt)
{
    if( !verifyStatus(cust) )
    {
        std::cout << "Die Transaktion kann leider nicht durchgefuehrt werden." << std::endl;
        return;
    }

    cust.mCreditcard.mBalance -= amnt;
}

void showBalance(const CreditCard &card)
{
    std::cout << "Balance: " << card.mBalance << std::endl;
}

int main()
{
    Customer peter;
    Customer john;

    peter.mState = CustomerState::Premium;
    john.mState = CustomerState::Standard;
    peter.mCreditcard.mState = CreditCardState::Valid;
    john.mCreditcard.mState = CreditCardState::Valid;

    std::cout << "Peter:"  << std::endl;
    showBalance(peter.mCreditcard);
    std::cout << "John:"  << std::endl;
    showBalance(john.mCreditcard);

    std::cout << "Each is going to withdraw some Money: First 50, then 100 and finally 200."  << std::endl;
    withdrawMoney(john, 50);
    withdrawMoney(peter, 50);

    withdrawMoney(john, 100);
    withdrawMoney(peter, 100);

    withdrawMoney(john, 200);
    withdrawMoney(peter, 200);

    std::cout << "Balance after withdrawing:" << std::endl;
    std::cout << "Peter:"  << std::endl;
    showBalance(peter.mCreditcard);
    std::cout << "John:"  << std::endl;
    showBalance(john.mCreditcard);


    return 0;
}
