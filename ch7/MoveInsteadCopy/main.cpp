#include <iostream>

#include <memory>

namespace lil
{
    class vector
    {
    public:

        vector(const std::initializer_list<int> list)
        {
            for(const auto &elem : list)
            {
                push_back(elem);
            }
        }

        vector(const int val)
        {
            push_back(val);
        }

        vector() = default; // trivial constructor

        vector(const vector &myCopy) // Special copy constructor
        {
            delete [] mData;

            mSize = myCopy.mSize;
            mData = new int [mSize];

            for(int i=0 ; i<mSize ; i++) {
                mData[i] = myCopy[i];
            }
        }

        ~vector() { delete [] mData; }

        void push_back(const int val)
        {
            int *tempData = new int[mSize+1];

            for(unsigned int i=0 ; i<mSize ; i++)
            {
                tempData[i] = mData[i];
            }

            tempData[mSize] = val;
            delete [] mData; // deleting nullptr does not make it crash
            mData = tempData;
            mSize++;
        }

        int operator[](const unsigned int idx)
        {
            return mData[idx];
        }

        int operator[](const unsigned int idx) const
        {
            return mData[idx];
        }

        int getSize()
        {   return mSize;   }

    private:
        int *mData = nullptr;
        int mSize = 0;
    };
};


int main()
{
    const int val = 20;

    auto ptr1 = std::make_unique<lil::vector>();

    ptr1->push_back(42);

    if(ptr1)
    {
        std::cout << "ptr1 has the vector with values: " << std::endl;
        for(int i=0 ; i<ptr1->getSize() ; i++) {
            std::cout << (*ptr1)[i] << std::endl;
        }

    }

    /// auto ptr2 = ptr1; // Unique does not like being copied!
    auto ptr2 = std::move(ptr1); // But moving is okay :-)

    if(ptr2)
    {
        std::cout << "ptr2 has the vector with values: " << std::endl;
        for(int i=0 ; i<ptr2->getSize() ; i++) {
            std::cout << (*ptr2)[i] << std::endl;
        }

    }

    if(!ptr1)
    {
        std::cout << "ptr1 is not pointing to the object anymore." << std::endl;
    }

    return 0;
}
