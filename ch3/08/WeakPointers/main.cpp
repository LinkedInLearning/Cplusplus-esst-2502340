#include <iostream>
#include <memory>

struct CreditCard;

struct Customer {

    ~Customer() {
        std::cout << "Customer destroyed" << std::endl;
    }

    int mId = 0;
    std::shared_ptr<CreditCard> mCreditCard;
};


struct CreditCard {

    ~CreditCard() {
        std::cout << "CreditCard destroyed" << std::endl;
    }

    int mId = 0;
    std::weak_ptr<Customer> mCustomer;
};


int main()
{
    auto myCustomer = std::make_shared<Customer>();
    auto myCreditCard = std::make_shared<CreditCard>();

    myCustomer->mCreditCard = myCreditCard;
    myCreditCard->mCustomer = myCustomer;

    return 0;
}
