#include <iostream>

namespace lil
{
    class vector
    {
    public:
        vector(const int val)
        {
            push_back(val);
        }

        vector() = default; // trivial constructor

        vector(const vector &) = delete; // Copying using copy-constructor is not allowed.

        ~vector() { delete [] mData; }

        void push_back(const int val)
        {
            int *tempData = new int[mSize+1];

            for(unsigned int i=0 ; i<mSize ; i++)
            {
                tempData[i] = mData[i];
            }

            tempData[mSize] = val;
            delete mData; // deleting nullptr does not make it crash
            mData = tempData;
            mSize++;
        }

        int operator[](const unsigned int idx)
        {
            return mData[idx];
        }

    private:
        int *mData = nullptr;
        int mSize = 0;
    };
};


int main()
{
    const int val = 20;

    lil::vector lilVec();
    lilVec1.push_back(val);

    std::cout << lilVec1[0] << std::endl;

    return 0;
}
