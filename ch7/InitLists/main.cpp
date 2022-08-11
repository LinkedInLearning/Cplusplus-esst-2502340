#include <iostream>

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

        vector(const vector &) = delete;

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

    lil::vector lilVec1 {16, 23, 34};
    lilVec1.push_back(val);

    std::cout << lilVec1[0] << std::endl;
    std::cout << lilVec1[1] << std::endl;
    std::cout << lilVec1[2] << std::endl;
    std::cout << lilVec1[3] << std::endl;

    return 0;
}
