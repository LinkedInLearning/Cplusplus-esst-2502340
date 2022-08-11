#include <iostream>
#include <string>

int main()
{
    const std::string myText = "Genug Hello World!!";

    const auto hPos = myText.find("H");
    std::cout << hPos << std::endl;

    const auto myTextPartial = myText.substr(hPos, std::string::npos);

    std::cout << myTextPartial << std::endl;

    return 0;
}
