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


struct Customer {
    int mId = 0;
    CustomerState mState = CustomerState::New;
};

struct CreditCard {
    int mId = 0;
    CreditCardState mState = CreditCardState::New;
};

static_assert(sizeof(decltype(CreditCard::mId)) >= 4, "Memory for CreditCard class Id is too small!");
static_assert(sizeof(decltype(Customer::mId)) >= 4, "Memory for Customer class Id is too small!");

int main()
{
    Customer peter;
    CreditCard visa;

    peter.mState = CustomerState::Premium;
    visa.mState = CreditCardState::Valid;

    std::cout << "peter.mState: " << int(peter.mState) << std::endl;
    std::cout << "visa.mState: " << int(visa.mState) << std::endl;
    return 0;
}
