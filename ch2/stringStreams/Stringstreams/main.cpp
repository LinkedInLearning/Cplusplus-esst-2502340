#include <iostream>
#include <sstream>
#include <array>

int main()
{
    std::stringstream ss;

    std::array<int, 4> x;

    ss << "30 25 70.3";
    ss << "EtwasText";

    ss >> x[0];
    ss >> x[1];
    ss >> x[2];
    ss >> x[3];

    for( const auto e : x) {
        std::cout << e << std::endl;
    }

    if ( (ss.rdstate() & std::stringstream::failbit ) != 0 ) {
      std::cerr << "Error: Not all values could be extracted correctly!" << std::endl;
    }


    return 0;
}
