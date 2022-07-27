#include <iostream>
#include <string>

int main()
{
    int x;
    float y;
    double z;
    std::string text;

    std::cout << "Bitte Wert für x eintragen (Enter zum bestätigen): ";
    std::cin >> x;
    std::cout << "Bitte Wert für y eintragen (Enter zum bestätigen): ";
    std::cin >> y;
    std::cout << "Bitte Wert für z eintragen (Enter zum bestätigen): ";
    std::cin >> z;
    std::cout << "Bitte einen Text schreiben (Enter zum bestätigen): ";
    std::cin >> text;


    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << text << std::endl;
    return 0;
}
