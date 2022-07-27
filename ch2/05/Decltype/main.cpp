#include <iostream>
#include <string>

int main()
{
    std::string myText = "Hello World!!";

    std::cout << myText << std::endl;

    decltype(myText.find("W")) wPos = myText.find("W");
    std::cout << wPos << std::endl;

    myText.erase(wPos-1, 1);
    std::cout << myText << std::endl;

    return 0;
}
