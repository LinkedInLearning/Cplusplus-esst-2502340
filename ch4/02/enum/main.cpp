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

int main()
{
    Customer peter;
    CreditCard visa;

    peter.mState = CustomerState::Premium;
    visa.mState = CreditCardState::Valid;

    if(visa.mState == CreditCardState::Invalid) {
        std::cout << "Die Visa Kreditkarte is ungueltig." << std::endl;
    }

    std::cout << "peter.mState: " << int(peter.mState) << std::endl;
    std::cout << "visa.mState: " << int(visa.mState) << std::endl;
    return 0;
}
