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
	// TODO: Alle Karten müssen gültig (valid) sein.
	// TODO: Premium-Kunden dürften sich weiterhin verschulden, Standard-Kunden nicht
}

void withdrawMoney(Customer &cust, const int amnt)
{
	// TODO: Prüfen ob Kunde überhaupt Geld abheben darf; Fehler melden, falls nicht.
	
	// TODO: Dann Geld abheben    
}

void showBalance(const CreditCard &card)
{
	// TODO: Anzeigen wieviel Geld noch auf der Kreditkarte ist
}

int main()
{
    Customer peter;
    Customer john;

	// TODO: Erkläre Peter zu Premium-Kunde, John zu Standard-Kunde

	// TODO: Zeige hier an, wieviel Geld Sie zur Verfügung haben

    std::cout << "Each is going to withdraw some Money: First 50, then 100 and finally 200."  << std::endl;
    
    withdrawMoney(john, 50);
    withdrawMoney(peter, 50);

    withdrawMoney(john, 100);
    withdrawMoney(peter, 100);

    withdrawMoney(john, 200);
    withdrawMoney(peter, 200);

	// TODO: Zeige hier an, wieviel Geld beide jetzt zur Verfügung haben

    return 0;
}
