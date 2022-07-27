#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

struct Customer
{

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

    std::string mName;
};

#endif // CUSTOMER_H
