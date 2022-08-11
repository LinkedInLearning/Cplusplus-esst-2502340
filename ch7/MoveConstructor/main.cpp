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

        vector(vector &&myMovee) // Special move constructor
        {
            delete [] mData;

            mData = myMovee.mData;
            mSize = myMovee.mSize;

            myMovee.mSize = 0;
            myMovee.mData = nullptr;
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

    lil::vector lilVec1 {16, 23, 34};    
    lilVec1.push_back(val);

    std::cout << "lilVec1 before move:" << std::endl;
    for(int i=0 ; i<lilVec1.getSize() ; i++) {
        std::cout << lilVec1[i] << std::endl;
    }

    lil::vector lilVec2 = std::move(lilVec1);

    std::cout << "lilVec1 after move:" << std::endl;
    for(int i=0 ; i<lilVec1.getSize() ; i++) {
        std::cout << lilVec1[i] << std::endl;
    }

    std::cout << "lilVec2 :" << std::endl;
    for(int i=0 ; i<lilVec2.getSize() ; i++) {
        std::cout << lilVec2[i] << std::endl;
    }


    return 0;
}
