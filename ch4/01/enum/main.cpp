#include <iostream>

enum CUSTOMER_STATE {
    CUSTOMER_STATE_NEW,
    CUSTOMER_STATE_STANDARD,
    CUSTOMER_STATE_PREMIUM
};

enum CREDIT_CARD_STATE {
    CREDIT_CARD_STATE_NEW,
    CREDIT_CARD_STATE_VALID,
    CREDIT_CARD_STATE_TRANSFER_IN_PROGRESS,
    CREDIT_CARD_STATE_INVALID,
    CREDIT_CARD_STATE_ERROR
};


struct Customer {
    int mId = 0;
    CUSTOMER_STATE mState = CUSTOMER_STATE_NEW;
};

struct CreditCard {
    int mId = 0;
    CREDIT_CARD_STATE mState = CREDIT_CARD_STATE_NEW;
};

int main()
{
    Customer peter;
    CreditCard visa;

    peter.mState = CUSTOMER_STATE_PREMIUM;
    visa.mState = CREDIT_CARD_STATE_VALID;

    if(peter.mState == CREDIT_CARD_STATE_INVALID) {
        std::cout << "Peters Kreditkarte is ungueltig." << std::endl;
    }

    std::cout << "peter.mState: " << peter.mState << std::endl;
    std::cout << "visa.mState: " << visa.mState << std::endl;
    return 0;
}
