#include <iostream>
#include <fstream>
#include <array>

int main()
{

    std::ofstream file("myFile.txt");

    std::array<int, 3> x = {10, 20, 30};

    file << x[0] << std::endl;
    file << x[1] << std::endl;
    file << x[2] << std::endl;
    file.close();

    x.fill(0);

    for(const auto &e : x) {
        std::cout << e << std::endl;
    }

    std::ifstream readFile("myFile.txt");

    if(!readFile) {
        std::cerr << "Fehler: Datei ist nicht lesbar!";
        return 1;
    }

    readFile >> x[0];
    readFile >> x[1];
    readFile >> x[2];
    readFile.close();

    for(const auto &e : x) {
        std::cout << e << std::endl;
    }

    return 0;
}

