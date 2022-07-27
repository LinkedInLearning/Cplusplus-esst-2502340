#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVec = {23, 45, 65};

    myVec.push_back(13);

    std::cout << "Loop with classical for: " << std::endl;
    for( int i=0 ; i<myVec.size() ; i++ ) {
        std::cout << myVec[i] << std::endl;
    }

    std::cout << "Loop with iterators: " << std::endl;
    for( auto it = myVec.begin() ; it != myVec.end() ; it++ ) {
        std::cout << *it << std::endl;
    }

    std::cout << "Loop with for-each: " << std::endl;
    for( const auto val : myVec ) {
        std::cout << val << std::endl;
    }


    return 0;
}
