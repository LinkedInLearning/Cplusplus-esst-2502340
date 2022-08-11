#include <iostream>
#include <string>

#include <string>

class Customer
{
public:

    Customer(const std::string &name)
    {
        mName = name;
    }

    std::string getName()
    {
        return mName;
    }

    void rename(const std::string &name)
    {
        mName = name;
    }

private:
    std::string mName;
};


int main()
{
    Customer john("John Doe");

    std::cout << john.getName() << std::endl;

    john.rename("John Dont");

    std::cout << john.getName() << std::endl;

    return 0;
}
