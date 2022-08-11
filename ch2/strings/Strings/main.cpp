#include <iostream>
#include <string>

int main()
{
    std::string myText;

    std::cout << myText; // Leerer String

    myText = "Hello";
    std::cout << myText << std::endl;

    myText += "World";
    std::cout << myText << std::endl;

    myText = myText + "!!";
    std::cout << myText << std::endl;

    int wPos = myText.find("W");
    std::cout << wPos << std::endl;

    myText.insert(wPos, " ");
    std::cout << myText << std::endl;

    return 0;
}
