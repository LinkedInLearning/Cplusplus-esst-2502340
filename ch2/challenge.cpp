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

    if(!file)
    {
        std::cerr << "Error reading csv-file!" << std::endl;
        return 1;
    }

    // Read the matrix
    for( unsigned int i=0 ; i<numRows ; i++ )
    {
        for( unsigned int j=0 ; j<numCols ; j++ )
        {
            auto &row = matrix[i];
            file >> row[j];
        }
    }

    std::array<float, numCols> horSum;
    std::array<float, numRows> vertSum;
    horSum.fill(0.0f);
    vertSum.fill(0.0f);

    // Calculate the sums
    for( unsigned int i=0 ; i<numRows ; i++ )
    {
        for( unsigned int j=0 ; j<numCols ; j++ )
        {
            auto &row = matrix[i];
            horSum[i] += row[j];
            vertSum[j] += row[j];
        }
    }

    // Display the sums
    for( unsigned int i=0 ; i<horSum.size() ; i++ )
    {
        std::cout << "horSum[" << i << "]: " << horSum[i];
        std::cout << std::endl;
    }

    for( unsigned int j=0 ; j<vertSum.size() ; j++ )
    {
        std::cout << "vertSum[" << j << "]: " << vertSum[j];
        std::cout << std::endl;
    }

    return 0;
}
