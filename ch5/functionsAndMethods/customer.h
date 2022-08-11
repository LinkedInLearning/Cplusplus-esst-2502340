#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
public:
    /**
     * @brief Customer  Required for building the customer object
     * @param name Name of the customer
     */
    Customer(const std::string &name);

    /**
     * @brief Customer Destructor
     */
    virtual ~Customer();

    /**
     * @brief getName
     * @return returns the name of the customer
     */
    std::string getName();

    /**
     * @brief rename In case you want to rename the customer, use this methd
     * @param name New name to set
     */
    void rename(const std::string &name);

private:
    std::string mName;
};

/**
 * @brief askForName Displays the name of a given Customer Object
 * @param person customer of which the name is to be displayed
 */
void askForName(Customer &person);

#endif // CUSTOMER_H
