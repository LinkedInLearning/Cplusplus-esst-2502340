#include <iostream>

#include <fstream>
#include <sstream>
#include <array>

constexpr int numRows = 4;
constexpr int numCols = 4;

std::array< std::array<float, numCols>, numRows > matrix;

int main()
{
    std::ifstream file("numbers.csv");

	// TODO: Check wheter file can be opened

    // TODO: Read the matrix from file

    // TODO: Calculate the sums

    // TODO: Display the sums

    return 0;
}
