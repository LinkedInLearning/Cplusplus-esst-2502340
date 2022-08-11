#ifndef CREDITCARD_H
#define CREDITCARD_H


class CreditCard
{
public:

    enum class State {
        New,
        Valid,
        TransferInProgress,
        Invalid,
        Error
    };

    CreditCard();

    /**
     * @brief getState Getter for State
     * @return the CreditCard State
     */
    State getState() const;

    /**
     * @brief getBalance getter for balance
     * @return the current balance
     */
    int getBalance() const;

    /**
     * @brief changeAmnt changes the amount of the creditcard
     * @param amnt amount to change
     */
    void changeAmnt(const int amnt);

    /**
     * @brief showBalance prints the current balance using std::cout
     */
    void showBalance();

private:

    State mState = State::Valid;
    int mBalance = 100;

};

#endif // CREDITCARD_H
