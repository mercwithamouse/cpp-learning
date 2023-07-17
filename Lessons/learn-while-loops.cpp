#include <iostream>

int main()
{
    std::string name;

    while(name.empty()){ // while will loop until the  condition is false
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "HELLO " << name;

    return 0;
}   