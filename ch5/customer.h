#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "creditcard.h"

class Customer
{
public:

    enum class State {
        New,
        Standard,
        Premium
    };

    /**
     * @brief Customer Constructor requires a initial state for customer
     */
    Customer(const State state);

    /**
     * @brief verifyStatus Verify whether we can perform a transaction with this customer
     * @return true if everything is fine, otherwise false
     */
    bool verifyStatus();

    /**
     * @brief withdrawMoney  Withdraw money from this customer
     * @param amnt amnt to add (+) or to reduce (-)
     */
    void withdrawMoney(const int amnt);

    /**
     * @brief showBalance Shows balance customer's credit card balance
     */
    void showBalance();

private:
    State mState = State::New;
    CreditCard mCreditcard;
};

#endif // CUSTOMER_H
